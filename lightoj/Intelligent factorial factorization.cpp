#include<bits/stdc++.h>
using namespace std;
int primescnt[100]={0};
int primes[100]={0};

bool a[101]={0};

void sieve()
{

	/*for(int i=2;i<=100;i++)
	{
		a[i]=0;
	}*/
	a[1]=1;
	a[0]=1;
	for(int j=4;j<=100;j+=2)
	{
		a[j]=1;
	}
	for(int i=3;i*i<=100;i+=2)
	{
		if(a[i]==0)
		{
			for(int j=i*i;j<=100;j+=2*i)
			   a[j]=1;
		}
	}
}
void count(int w)
{
	int x=w;
	for(int i=0;i<=x;i++)
	{
		if(!a[i])
		{
			while(x%i==0)
			{
			    primescnt[i]++;
				primes[i]=i;
				x=x/i;	
			}
		}
	}
}


int main()
{
	int tc;
	sieve();
	scanf("%d",&tc);
	int k=1;
	while(k<=tc)
	{
	    int n;
	    scanf("%d",&n);
		int l=0;
		for(int i=2;i<=n;i++)
		{
			count(i);
		}
		printf("Case %d: %d = ",k,n);
	for(int i=0;i<=n;i++)
	{
		if(a[i]==0)
		{
			if(l==0){
			printf("%d (%d)",primes[i],primescnt[i]);l=1;}
			else
			printf(" * %d (%d)",primes[i],primescnt[i]);
		}
	}
	cout << endl;
	for(int i=0;i<=100;i++)
	primescnt[i]=0; 		
		k++;
	}


}

