#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long a[n+2];
	long long sum=0;
	for(long long i=0;i<n;i++)
	{
		cin >> a[i];
		sum+=a[i];
	}
	cout << sum << endl;
}
