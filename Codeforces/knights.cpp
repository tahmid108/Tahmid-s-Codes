#include<bits/stdc++.h>
using namespace std;

bool isindex(int a,int n)
{
	if(a>=0 && a<n)
	return true;
	
	return false;
}
int main()
{
	int n;
	cin >> n;
	
	char a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		   a[i][j]='W';
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]=='W')
			{
				if(isindex(i+1,n) && isindex(j+2,n))
				{
					a[i+1][j+2]='B';
				}
				if(isindex(i+1,n) && isindex(j-2,n))
				{
					a[i+1][j-2]='B';
				}
				if(isindex(i+2,n) && isindex(j-1,n))
				{
					a[i+2][j+1]='B';
				}
				if(isindex(i+2,n) && isindex(j-1,n))
				{
					a[i+2][j-1]='B';
				}
				
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j];
		}
		cout << endl;
	}
}
