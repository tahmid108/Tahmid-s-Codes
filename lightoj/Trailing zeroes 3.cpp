#include<cstdio>
#define ll long long
using namespace std;

ll getans(ll n)
{
	//cout << n << endl;;
	int count=0;
	for(ll i=5;i<=n;i*=5)
	{
		//cout << j << endl;

	//		cout << "Dhukse"<<endl;
		count+=n/i;

	}
	return count;
}

long long checker(ll n)
{
	long long up=n*5;
	long long low=n%5;
	low=5-low+n;
	long long mid=(up+low)/2;
	mid=mid-(5-(mid)%5);
	//cout <<mid << endl;
    while(low<=up)
    {
    	ll ans=getans(mid);
    	//cout<<ans<<endl;
    	if(ans<n)
    	{
    		low=mid+5;
    		mid=(low+up)/2;
    		mid=mid+(5-mid%5);
    		//cout << mid << endl;
		}
		else if(ans>n)
		{
			up=mid-5;
			mid=(up+low)/2;
			mid=mid-(mid%5);
			//cout << mid << endl;
		}
		else if(ans==n)
		return mid;
	}
	return 0;
}

int main()
{
	ll n,tc;
	scanf("%lld",&tc);
	int k=1;
	while(k<=tc)
	{
		scanf("%lld",&n);
		ll ans=checker(n);
		if(ans==0)
		printf("Case %lld: impossible\n",k);
		else
		printf("Case %lld: %lld\n",k,ans);
		k++;
	}
}
