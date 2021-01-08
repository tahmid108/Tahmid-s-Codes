#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,k;
	cin >> n >> k;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		a[i]=a[i]-(a[i]%k);
	}
		for(int i=0;i<n;i++)
	{
		if(i==n-1)
		{
			cout<<a[i]<<endl;
			break;
		}
		cout<<a[i]<<" ";
	}
}
