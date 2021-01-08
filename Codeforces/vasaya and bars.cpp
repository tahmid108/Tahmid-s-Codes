#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t,s,a,b,c,bns,ma;
	cin >> t;
	while(t--)
	{
		cin >> s >> a >> b >> c;
		bns = ((s/c)/a)*b;
		ma = s/c;
		ma = bns + ma ;
		cout << ma << endl;
		
	}
}
