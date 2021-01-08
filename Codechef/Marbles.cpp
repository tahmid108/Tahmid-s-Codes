#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define max 1000006
#define inf 1000000009

 //
double C(ll n, ll r) {
    
    if(r > n - r) r = n - r; 
    ll ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans = (ans* (n - r + i));
      //  ans=inf;
        ans = (ans/i);
        //ans%=inf;
    }
   // cout << ans << endl;
   
    return ans;
//}
}

int main()
{
	ll tc,n,r;
	cin >> tc;
	while(tc--)
	{
		cin >> n >> r;
		double ans= (C(n,r)/(double)n)*(double)r;
		cout << (ll)ans << endl;
		//row.clear();
	}
}
