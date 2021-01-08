#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long w,x,y,z;

void fibo(long long a,long long b,long long n,long long ans[])
{
	if(n==0)
	{
		ans[0]=a;
		ans[1]=b;
		return;
	}
	fibo(a,b,n/2,ans);
	x = ans[0];
	y = ans[1];
	w = abs(2*y-x);
	if(w<0)
	w+=mod;
	w=(x*w)%mod;
	z = (x*x + y*y)%mod;
	
	if(n%2==0)
	{
		ans[0]=w;
		ans[1]=z;
	}
	else
	{
		ans[0]=z;
		ans[1]=w+z;
	}
	cout << n << " = " << ans[0] << " " << ans[1] << endl;
}

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		long long ans[2]={0};
		long long n,a,b;
		cin >> a >> b >> n;
		fibo(a,b,n,ans);
		printf("%lld\n",ans[0]);
	}
}
