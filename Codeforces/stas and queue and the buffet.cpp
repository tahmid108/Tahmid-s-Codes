#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool compr(pair<ll,ll>a,pair<ll,ll>b)
{
//	cout << a.first << " " << a.second << " " << b.first << " " << b.second << endl;
//	cout << a.first-a.second << " " << b.first-b.second << endl;
	return a.first-a.second>b.first-b.second;
}

int main()
{
	ll n;
	cin >> n;
	
	pair<ll,ll> p[n];
	for(int i=1;i<=n;i++)
	{
		cin >> p[i].first >> p[i].second;
	}
	
	sort(p+1,p+n+1,compr);
	ll ans = 0;
/*	for(int i=1;i<=n;i++)
	{
		cout << p[i].first << " " << p[i].second << endl;
	}*/
	for(int i=1;i<=n;i++)
	{
		ans+= p[i].first*(i-1);
		ans+= p[i].second*(n-i);
	}
	
	cout << ans << endl;
}
