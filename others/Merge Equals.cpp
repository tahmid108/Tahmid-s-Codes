#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll elements;
	vector<ll> a;
	cin >> elements;
	for(int i=0;i<elements;i++)
	cin >> a[i];
	ll j=0;
	ll x=a[j];
	while(j<elements)
	{
	for(ll i=j+1;i<elements;i++)
	{
		if(a[i]==a[j])
		{
		    a[j]=a[i]+a[j];
			swap(a[i],a[elements-1]);
			a.erase(a.begin()+elements-1);
			elements--;
		}
	
	}
}
}
