#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 65536
vector <ll> prime;
bool a[max]={0};

void sieve()
{
	 for (ll i = 2; i < max; i++)
	        if (!a[i]) {
                 prime.push_back(i);
			for (ll j = i * i; j < max; j += i)
			      a[j] = 1;
        }
        
}
int main()
{
	sieve();
	ll a,b;
	while(cin >> a >> b)
	{
		vector <ll> pow,fact;
		ll temp=b;
		for(ll i=0;i<prime.size()-1 && temp>1;i++)
		{
			if(temp%prime[i])
			{
				fact.push_back(i);
				pow.push_back(0);
				while(temp%prime[i]==0)
				{
					temp/=prime[i];
					pow[pow.size()-1]++;
					
			    }
			}
		}
		if(temp>1)
		{
			fact.push_back(temp);
			pow.push_back(1);
		}
		 
		bool done = b;
		for (int i = 0; i < fact.size(); i++) {

	            ll n = a;
	            int count = 0;

	            while (n >= fact[i]) {

	                n/= fact[i];
	                count += n;

	            }

	            if (count < pow[i]) {

	                done = false;

	                break;
	            }

	        }

	        if (done)

	            printf("%llu divides %llu!\n", b, a);

	        else

	            printf("%llu does not divide %llu!\n", b, a);

	    }
		    return 0;
		
		}
