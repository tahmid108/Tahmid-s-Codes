#include<bits/stdc++.h>
using namespace std;
#define inf 10000007

int am[100][100];
int par[100][100];
int tn,te,n1,n2,wgt,src,dest;

int path(int src,int dest)
{
	if(src==dest)
	{
		cout << src << " ";
		return 0;
	}
	path(src,par[src][dest]);
	cout << dest << " ";
}

int main()
{
	cin >> tn >> te;
	for(int i=1;i<=tn;i++)
	{
		for(int j=1;j<=tn;j++)
		{
			if(i==j)
			am[i][j]=0;
			else
			am[i][j]=inf;
			
			par[i][j]=i;
		}
	}
	while(te--)
	{
		cin >> n1 >> n2 >> wgt;
		am[n1][n2]=wgt;
    }
    
    for(int k=1;k<=tn;k++)
    {
    	for(int i=0;i<=tn;i++)
    	{
    		for(int j=0;j<=tn;j++)
    		{
    			if(am[i][k]+am[k][j]<am[i][j])
    			{
    				am[i][j]=am[i][k]+am[k][j];
    				par[i][j]=par[k][j];
				}
			}
		}
	}
	
	cout << "ENTER SOURCE : ";
	cin >> src;
	cout << "ENTER DESTINATION : ";
	cin >> dest;
	
	cout << "TOTAL DISTANCE : "<<am[src][dest]<< endl << "Path : ";
	path(src,dest);
}
