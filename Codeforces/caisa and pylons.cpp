#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long a[n+1];
	long long max=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]>max)
		max=a[i];
	}
	cout << max << endl;
}
