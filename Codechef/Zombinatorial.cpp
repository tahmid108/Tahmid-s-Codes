#include<bits/stdc++.h>
#define ll unsigned long long
#define MOD 1000000009
using namespace std;

ll itapow(ll a, ll b)
{
	ll  result = 1;
    while (b > 0){
	
        //# If power is even
        if (b % 2 == 0){
		
     //       # Divide the power by 2
            b = b / 2;
       //     # Multiply base to itself
            a = a * a;
        }
        else{
		
           // # Decrement the power by 1 and make it even
            b = b - 1;
           // # Take care of the extra value that we took out
           // # We will store it directly in result
            result = result * a;

            //# Now power is even, so we can follow our previous procedure
            b = b / 2;
            a = a * a;
        }
     
	 }
	 
    cout << result << endl;
    return result;
}

int main()
{
	ll n,m,q,tt,r;
	cin >> tt ;
	while(tt--)
	{
		cin >> n >> m >> q;
		while(q--)
		{
			cin >> r;
			ll x=n;
			vector < pair< ll,ll > > v;
			v.push_back(make_pair(0,0));
			for(int i=1;i<=n;i++)
			{
				v.push_back(make_pair(i,x));
				x--;
			}
			ll r1=r;
			for(int i=1;i<=r;i++)
			{
				v[i].second=v[i].second-r1;
				r1--;
			}
				ll r2=n-r;
			for(int i=1;i<=n-r;i++)
			{
				v[i].second=v[i].second-r2;
				r2--;
			}
			ll ans=1;
			for(int i=1;i<=n;i++)
			{
				//cout << v[i].first << " " << v[i].second << endl;
				ans*=itapow(v[i].first,v[i].second);
				ans%=m;
			}
			cout << ans%m << endl;
			v.clear();
		}
	}
}
