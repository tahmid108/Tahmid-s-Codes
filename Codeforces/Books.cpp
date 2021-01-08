#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n,t;
	cin >> n >> t;
	ll a[n+3];
	for(int i=0;i<n;i++)
	cin >> a[i];
	
	//sort(a,a+n);
	ll sum=0,count=0,max=0;
    while(count<n && sum+a[count]<=t)
    {
    	sum+=a[count++];
	}
	max=count;
	for(int i=0;i<n;i++)
	{
		sum-=a[i];
		while(count<n && sum+a[count]<=t)
		{
			sum+=a[count++];
		}
		if(count-i-1>max)
		max=count-i-1;
	}
	cout << max << endl;
    
}
