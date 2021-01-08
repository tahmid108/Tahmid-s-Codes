#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		long long c,m,hudai;
		cin >> c >> m >> hudai;
		long long mn = min(c,m);
		long long ans = min(mn,(c+m+hudai)/3);
		
		cout << ans << endl;
	}
}
