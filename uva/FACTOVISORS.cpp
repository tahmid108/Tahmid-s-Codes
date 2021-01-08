#include <cstdio>
#include <vector>
#include <iostream>
#include<cstring>
using namespace std;
#define ll unsigned long long
int main() {
	bool sieve[65536];
	memset(sieve,0,sizeof(sieve));
    vector<ll> prime;
	    for (ll i = 2; i < 65536; i++)
	        if (!sieve[i]) {
                 prime.push_back(i);
			for (ll j = i * i; j < 65536; j += i)

	                sieve[j] = 1;
        }
    ll n, mm;

	    while (scanf("%lld %lld",&n,&mm)) {

	        vector<ll> fact, pow;

	        ll temp = mm;

	        for (int i = 0; i < prime.size() && temp > 1; i++) {
	            if (temp % prime[i] == 0) {

	                fact.push_back(prime[i]);

	                pow.push_back(0);

	                while (temp % prime[i] == 0) {
	                    pow[pow.size() - 1]++;

	                    temp /= prime[i];

	                }

	            }

	        }

	        if (temp > 1) {

	            fact.push_back(temp);

	            pow.push_back(1);

	        }

	        bool ok = (mm != 0);


	        for (int i = 0; i < fact.size(); i++) {

	            ll j = n;
	            int count = 0;

	            while (j >= fact[i]) {

	                j /= fact[i];
	                count += j;

	            }

	            if (count < pow[i]) {

	                ok = false;

	                break;
	            }

	        }

	        if (ok)

	            printf("%llu divides %llu!\n", mm, n);

	        else

	            printf("%llu does not divide %llu!\n", mm, n);

	    }
		    return 0;
	}
