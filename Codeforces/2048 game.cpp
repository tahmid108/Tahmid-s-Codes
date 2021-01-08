#include<bits/stdc++.h>
using namespace std;


int main()
{
	int q,n;
	cin >> q;
	while(q--)
	{
		cin >> n;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		sort(a,a+n);
		
		long long sum = 0;
		bool flag = 0;
		for(int i=n-1;i>=0;i--)
		{
			if(sum>2048)
			{
				flag = 1;
				break;
			}
			else if(sum==2048)
			{
				break;
			}
			if(i==0)
			{
				sum+=a[i];
				if(sum==2048)
				{
					flag = 0 ;
					break;
				}
				else
				{
					flag =1;
					break;
				}
			}
			if(a[i]<=2048)
			sum+=a[i];
		}
		if(flag==1)
		cout << "NO\n";
		else
		cout << "YES\n";
	}
	
}
