#include<bits/stdc++.h>
using namespace std;

long long sod (long long n)
{
	long long sum=0;
	long long x=n;
	long long ss=0;
	for(long long i=2;i<n;i++)
	{
		sum+=(n/i)*i;
	}
	return sum;
}

int main()
{
	int tc;
	cin >> tc;
	int i=1;
	long long n;
	while(i<=tc)
	{
		cin >>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            n;
		n=sod(n);
		cout << "Case " << i << ": "<< n << endl;
		i++;
	}
	
}
