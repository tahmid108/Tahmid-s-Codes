#include<cstdio>
#include<vector>
#include<math.h>
#define ll long long
using namespace std;
bool prime[100003];
vector <int> primes;
void sieve()
{
	for(int i=2;i<=100003;i++)
	{
	    	prime[i]=true;
	}
	prime[1]=false;prime[0]=false;
		for(int j=4;j<=100003;j+=2)
	{
		prime[j]=false;
	}
	for(int i=3;i*i<=100003;i+=2)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=100003;j+=2*i)
			   prime[j]=false;
		}
	}
}

int main()
{
	sieve();
	for(int i=0;i<=100003;i++)
	{
		if(prime[i]){
	    primes.push_back(i);
	}
	}
	ll tc,n;
	scanf("%lld",&tc);
	int j=1;
	while(j<=tc)
	{
		scanf("%lld",&n);
		int ans=1,count=0;
		for(int i=0;;i++)
		{
			if(primes[i]*primes[i]*primes[i]>n)
			break;
			//int ans=1;
			//int count=0;
			while(n%primes[i])
			{
				count++;
				n=n/primes[i];
			}
			ans=ans*count;
		}
		double d=sqrt(n);
		ll x=0;
		if(d-(int)d==0)
		{
			  x=sqrt(n);
		}
		if(prime[n])
		ans=ans*2;
		else if(prime[x])
		ans=ans*3;
		else if(n!=1)
		ans=ans*4;
	    
	    printf("Case %lld: %d\n",j,ans-1);
	    j++;
	}
	
	
	return 0;
}
