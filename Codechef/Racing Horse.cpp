#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long tc,n;
	cin >> tc ;
	while(tc--)
	{
		cin >> n;
		long long a[n+1];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		sort(a,a+n);
		int min=1000000009;
		for(int i=0;i<n-1;i++)
		{
			if(min>a[i+1]-a[i])
			{
				min=a[i+1]-a[i];
			}
		}
		cout << min << endl;
	}
}
