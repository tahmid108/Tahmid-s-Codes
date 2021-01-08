#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
} 

int main()
{
	ll a,b;
	pair < ll , pair <ll,ll> > p;
	cin >> a >> b;
	ll ans ;
	ll mindex ;
	ll min_ = 1000000007;
	for(int i=0;max(a,b)<min_;i++)
	{
		ans = a*b/gcd(a,b);
		if(ans<min_)
		{
			p.first = ans;
			min_ = ans;
			p.second.first = a;
			p.second.second = b;
		//	ans = min_ ;
		    mindex = i;
		}
		a++;
		b++;
	//	cout << min_ << endl;
	//	cout << ans << endl;
	//	cout << max(a,b) << endl;
	}
	cout << mindex << endl;
}
