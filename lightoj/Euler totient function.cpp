#include<cstdio>
#include<vector>
#include<math.h>
#define max 1000003
using namespace std;
vector <int> prime;
bool a[max];

void sieve()
{
	a[1]=1;
	a[0]=1;
	for(int j=4;j<=max;j+=2)
	{
		a[j]=1;
	}
	for(int i=3;i*i<=max;i+=2)
	{
		if(a[i]==0)
		{
			for(int j=i*i;j<=max;j+=2*i)
			   a[j]=1;
		}
	}
	for(int i=0;i<=max;i++)
	{
		if(!a[i])
		prime.push_back(i);
	}
}
int cnt(long long n)
{
	long long x=n;
	for(int i=0;prime[i]<=sqrt(n);i++)
	{
		if(x%prime[i]==0)
		x=x-x/prime[i];
	}
	return x;
}
int main()
{
	int tc;
	long long n;
	scanf("%d",&tc);
	sieve();
	while(tc--)
	{
		scanf("%lld",&n);
		if(!a[n])
		printf("%lld\n",n-1);
		else
		{
			int ans=cnt(n);
				printf("%lld\n",ans);
		}
	}
}
