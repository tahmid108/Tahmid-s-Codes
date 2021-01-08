#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long a[n+1],b[n],c[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
		cin >> b[i];
	}
	for(int i=0;i<n-2;i++)
	{
		cin >> c[i];
	}
	sort(b,b+n-1);
	sort(c,c+n-2);
	
	bool flag=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=b[i])
		{
			cout << a[i] << endl;
			flag=1;
			break; 
		}
	}
	
	if(flag==0)
	cout << a[n-1] << endl;
	
	 flag=0;
	for(int i=0;i<n-2;i++)
	{
		if(c[i]!=b[i])
		{
			cout << b[i] << endl;
			flag=1;
			break; 
		}
	}
	
	if(flag==0)
	cout << b[n-2] << endl;
}
