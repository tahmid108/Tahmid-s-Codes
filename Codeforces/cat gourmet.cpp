#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll a , b , c ;
	cin >> a >> b >> c;
	
	ll ap,bp,cp;
	ap = a/3;
	bp = b/2;
	cp = c/2;
	
	ll min_ = min (ap,min(bp,cp));
	ll max_ = max (ap,max(bp,cp));
	
	ll ans = min_ * 7;
	
    
	
	cout << ans << endl ;
}
