#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    long long arr[n];
    cin>>arr[0];
    ll tmp = arr[0];
    ll gcd = 0;
    for(ll i=1;i<n;i++)
    {
        cin>>arr[i];
        long long diff = arr[i]-tmp;
        tmp = arr[i];
        gcd = __gcd(gcd,diff);

    }
    
    for(int j=0;j<m;j++)
    {

        cin>>tmp;
        if(gcd%tmp==0)
        {
            cout<<"YES\n";
            cout<<arr[0]<<" "<<j+1<<endl;
            return 0;
        }
    }

    cout<<"NO\n";
}
