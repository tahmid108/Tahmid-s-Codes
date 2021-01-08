#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	int n,d;
	int *killer[1024];
	
	cin >> tc;
	
	while(tc--)
	{
		cin >> d >> n;
		for(int i=0;i<1024;i++)
		{
			killer[i]=new int[1024];
			for(int j=0;j<1024;j++)
			  killer[i][j]=0;
		}
		
		int x,y,prof;
		
		
		for(int i=0;i<n;i++)
		{
			cin >> x >> y >> prof;
			for(int j=x-d;j<=x+d;j++)
			{
				if(j<0 || j>=1024)
				continue;
				
				for(int k=y-d;k<=y+d;k++)
				{
					if(k<0 || k>=1024)
				        continue;
				        
				    killer[j][k]+=prof;    
				}
			}
		}
		
		int maxm = -1;
		
		for(int i=0;i<1024;i++)
		{
			for(int j=0;j<1024;j++)
			{
				if(killer[i][j]>maxm)
				{
					x=i;
					y=j;
					maxm = killer[i][j];
				}
			 
			} //killer[i][j]=0;
		}
		
		cout << x << " " << y << " " << maxm << endl;
		
		
	}
	return 0;
}
