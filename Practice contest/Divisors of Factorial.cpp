#include<bits/stdc++.h>
using namespace std;
vector<int> v;

void sieve(long long n)
{
	v.clear();
    vector<bool> prime(n+1,true);
	for(int p=2;p*p<=n;p++)
	{
		if(prime[p]==true)
		{
			for(int i=p*2;i<=n;i+=p)
			{
				prime[i]=false;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(prime[i])
		v.push_back(i);	
	}	
}

long long divi(long long n)
{
	long long result=1;
	for(int i=0;i<v.size();i++)
	{
		long long x=v[i];
		
		long long expon=0;
		
		while(x<=n)
		{
			expon=expon+(n/x);
			x=x*v[i];
		}
		result=(result*(expon+1))%1000000007;
	}
	return result;
}

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
    	long long n;
    	cin >> n;
    	sieve(n);
    	long long ans=divi(n);
    	cout << ans << endl;
    }
}
