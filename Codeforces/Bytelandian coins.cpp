#include<bits/stdc++.h>
#define ll long long
using namespace std;

map <ll,ll> mp;
long long getans(long long n)
{
	if(n==0)
	return 0;
	
	if(mp[n]!=0)return mp[n];
	
	long long ans= getans(n/2) + getans(n/3) + getans(n/4);
	
	if(n>ans)mp[n]=n;
	else
	mp[n]=ans;
	
	return mp[n];
}

int main()
{
	ll n;
	while(scanf("%lld",&n)!=EOF)
	{
	    cout << getans(n) << endl;
	}
}
