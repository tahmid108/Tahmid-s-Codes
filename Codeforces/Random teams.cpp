#include<bits/stdc++.h>
using namespace std;

long long countmin(long long n,long long m)
{
	if(m==1)
	return((n*(n-1))/2);
	
	long long md=n%m;
	if(md>1)
	{
		md = (md*(md-1))/2;
	}
	else
	md=0;
	
	long long dv= n/m;
	long long dv2= dv;
	if(n%m!=0)
	dv++;
	
	cout << md << endl;
	cout << dv << endl;
	long long ans = (dv*(dv-1))/2;
	cout << ans << endl;
	if(n%m==0)
	ans*=m;
	else
	ans*=dv2;
	
	return ans+md;
	
}

long long countmax(long long m,long long n)
{
	long long ans=(m-n)+1;
	return(ans*(ans-1))/2;
}

int main()
{
	long long n,m;
	cin >> n >> m;
	long long mn = countmin(n,m);
	long long mx = countmax(n,m);
	cout << mn << " " << mx << endl;
}
