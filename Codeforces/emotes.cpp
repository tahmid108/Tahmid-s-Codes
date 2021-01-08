#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m,k;
	cin >> n >> m >> k;
	long long a[n];
	
	for(int i=0;i<n;i++)
	cin >> a[i];
	
	sort(a,a+n);
	
	if(a[n-1]==a[n-2])
	cout << a[n-1]*m << endl;
	else
	{
		long long x = (m/(k+1));
		long long y = (m%(k+1));
	//	cout << x << " " << y << " " << a[n-1] << " " << a[n-2] << endl;
		long long f = x*k*a[n-1] + x*a[n-2] + y*a[n-1] ;
		cout << f << endl;
	}
}
