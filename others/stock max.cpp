#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin >> t ;
	while(t--)
	{
		cin >> n;
		long long a[n+1];
		long long profit=0;;
		for(int i=0;i<n;i++)
		cin >> a[i];
		
		long long hold = a[0];
		
		for(int i=1;i<n;i++)
		{
			int j;
			for(j=i;a[j]>a[j-1];j++)
			{
				hold += a[j];
				hold *= j;
			}
			i = j;
			profit += a[i]-hold;
		}
		cout << profit << endl;
	}
}
