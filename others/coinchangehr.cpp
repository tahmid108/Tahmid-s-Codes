#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin >> m >> n;
	
	long long c[n];
	
	for(int i=0;i<n;i++)
	cin >> c[i];
	
	long long table[n+1][m+1];
	
	for(int i=0;i<=m;i++)
	{
		if(i%c[0]==0)
		table[0][i]=1;
		else
		table[0][i]=0;
    }
	 
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(j>=c[i])
			table[i][j]=table[i-1][j]+table[i][j-c[i]];
			else
			table[i][j]=table[i-1][j];
		}
	} 
	
	/*for(int i=0;i<n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			cout << table[i][j] << " ";
			
		}
		cout << endl;
	}*/
	
	cout << table[n-1][m] << endl;
	 
}
