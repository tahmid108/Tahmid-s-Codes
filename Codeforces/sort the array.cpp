#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n;
	//ll a[100005];
	vector <ll> v1;
	vector <ll> v2;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		ll x;
		cin >> x;
		v1.push_back(x);
		v2.push_back(x);
	}
	ll count=0;
	ll ind1=0,ind2=0;
	sort(v2.begin(),v2.end());
	for(int i=0;i<n;i++)
	{
		if(v1[i]!=v2[i])
		{
		//	cout << v1[i] << " " << v2[i] << endl;
			count++;
			if(count==1)
		      ind1=i;
		    else if(count==2)
		      ind2=i;
		  //  cout << ind1 << " " << ind2 << endl;  
		}
	
	
	}
	if(count==0)
	{
		cout << "yes\n" << 1 << " " << 1 << endl;
	}
	else if(count>2)
	{
		cout << "no\n";
	}
	else
	{
		cout << "yes\n" << ind1+1 << " " << ind2+1 << endl;
	}
	
	
}
