#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	long long n,k,x;
	cin >> n >> k;
	long long a[n];
	for(long long i=0;i<n;i++)
	{
		cin >> a[i];
		//v.push_back(x);
	}
	sort(a,a+n);
	/*	for(int i=0;i<n;i++)
	{
		cout << v[i] << endl;
	}*/
	if(k==0)
	{
		if(a[0]>1)
		{
			cout << a[0]-1 << endl;
		}
		else
		cout << -1 << endl;
		
		return 0;
	}
    if(a[k-1]==a[k])
    cout << -1 << endl;
    else
    cout << a[k-1] << endl;
}

