#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n;
		cin >> n;
		int a [n][n];
		int flag = 0;
		for(int i=0;i<n;i++)
		{
			int cnt = 0;
			for(int j=0;j<n;j++)
			{
				cin >> a[i][j];
				if(a[i][j]!=0)
				cnt ++;
			}
			if(cnt==n)
			flag=-1;
		}
		for(int i=0;i<n;i++)
		{
			int cnt = 0;
			for(int j=0;j<n;j++)
			{
				if(a[j][i]!=0)
				cnt++;
			}
			if(cnt==n)
			flag=-1;
		}
		if(flag==-1)
		cout << "NO\n";
		else
		cout << "YES\n";
	}
}
