#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n+2];
	a[0]=0;
	for(int i=1;i<=n;i++)
	cin >> a[i];
	
	//sort(a,a+n);
	
	/*for(int i=0;i<n;i++)
	{
		if(i==n-1)
		cout << a[i] << endl;
		else
		cout << a[i] << " ";
	}*/
	
	
	
	for(int i=1;i<=n;i++)
	{
		map < int , int > mp;
		for(int j=i;j<=n;j=a[j])
		{
			mp[j]++;
			if(mp[j]==2)
			{
				if(i==n)
				cout << j << endl;
				else
				cout << j << " ";
				break;
			}
		}
	}
}
