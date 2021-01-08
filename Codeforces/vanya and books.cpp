#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	long long ans;
	cin >> n;
	ans = 0;
	long long x=n;
    for(int i=1;i<=n;i*=10)
    ans = ans + (n-i+1);
	cout << ans << endl;
}
