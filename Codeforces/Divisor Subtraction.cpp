#include<bits/stdc++.h>
using namespace std;

vector < long long > v;

void sieve(long long n)
{
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for(int p=2;p*p<=n;p++)
	{
		if(prime[p]==true)
		{
			for(int i=p*2;i<=n;i+=p)
			  prime[i]=false;
		}
	}
	
	for(int p=2;p<=n;p++)
	{
		if(prime[p])
		v.push_back(p);
	}
}

int main()
{
	//long long n= (long long)sqrt(10000000000);
	//cout << n << endl;
	//sieve(n);
	
	long long x;
	cin >> x;
	int counter=0;

		while(x%2==0)
		{
			counter++;
			x=x/2;
		}
		for(int i=3;i*i<=sqrt(x);i+=2)
		{
			while(x%i==0)
			{
				counter++;
				x=x/i;
			}
		}
    if(x>2)
    counter++;
	cout << counter << endl;
	
	
	
	
	
}
