#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long tc,a,b,k,ans;
	cin >> tc;
	while(tc--)
	{
		cin >> a >> b >> k;
		long long f = k/2;
		ans = (a*(k-f)) - (b*f);
		cout << ans << endl;
	}
	
}
