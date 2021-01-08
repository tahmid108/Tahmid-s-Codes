#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n,m;
		cin >> n >> m;
		int color[n+1][m+1]={0};
		int obs[n+1][m+1]={0};
		char s;
		int dots=0;
		int count=0;
		int hash=0;
		int counth=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin >> s;
				if(s=='.')
				{
					obs[i][j]=0;
					dots++;
				}
				else if(s=='#')
				{
					obs[i][j]=1;
					hash++;
				}
			}
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<m-1;j++)
			{
				if(!(obs[i][j]==1 || obs[i][j+1]==1 || obs[i+1][j]==1 || obs[i+1][j+1]==1))
				{
					//cout << "DHUKAR TO KOTHA NA SECOND BAR \n";
					color[i][j]=1;
					color[i][j+1]=1;
					color[i+1][j]=1;
					color[i+1][j+1]=1;
				}
				
				else
				{
					if(obs[i][j]==1)
					color[i][j]=0;
					if(obs[i][j+1]==1 )
					color[i][j+1]=0;
					if(obs[i+1][j]==1)
					color[i+1][j]=0;
					if(obs[i+1][j+1]==1)
					color[i+1][j+1]=0;
				}
				
			}
		}
	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
		     	cout << color[i][j] << " "; 
				if(obs[i][j]==0 && color[i][j]==1)
				{
					count++;
				}
				else if(obs[i][j]==0 && color[i][j]==0)
				{
					//break;
				}
				else if(obs[i][j]==1 && color[i][j]==0)
				{
					counth++;
				}
			}
			cout << endl;
		}
		
		if(count==dots && counth==hash)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
		
	}
}
