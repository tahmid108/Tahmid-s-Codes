#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n,m;
	cin >> n >> m;
	ll oddac=0,oddbc=0,evenac=0,evenbc=0;
	
	for(int i=0;i<n;i++)
	{
		ll temp;
		cin >> temp;
		if(temp%2==0)
		evenac++;
		else
		oddac++;
	}
	for(int i=0;i<m;i++)
	{
		ll temp;
		cin >> temp;
		if(temp%2==0)
		evenbc++;
		else
		oddbc++;
	}
	
	cout << min(evenac,oddbc)+min(evenbc,oddac) << endl;
	
	
}
