#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	map < ll,int > mp;
	
	for(int i=1;i<=40000;i++)
	{
		mp[i*i]++;
	}
	
	for(int i=1;i<=40000;i++)
	{
		mp[i*i*i]++;
	}
	
	while(true)
	{
		ll n;
		cin >> n;
		
		if(n==0)
		break;
		
		if(mp[n]==2)cout << "Special\n";
		else cout << "Ordinary\n";
	}
}
