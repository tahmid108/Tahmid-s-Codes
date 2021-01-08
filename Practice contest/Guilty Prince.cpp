#include<bits/stdc++.h>
using namespace std; 

int cnt = 0 ;

bool b[100][100]={false};
char c[100][100];

void counter(int i , int j , int n , int h)
{
	if(c[i][j]=='#' || b[i][j]==true)
	return;
	if((i>=n-1 && j>=h-1) || (i<=0 && j<=0))
	{
		cnt++;
		b[i][j]=true;
		return;
	}
	cnt++;
	b[i][j]=true;
	cout << i << " " << j << " " << b[i][j] << " " << cnt << endl;
	counter(i+1,j,n,h);
	counter(i,j+1,n,h);
	counter(i-1,j,n,h);
	counter(i,j-1,n,h);
}
int main()
{
	int t;
	cin >> t;
	int k=1;
	while(t>=k)
	{
		int n,h,indx,indy;
		cin >> n >> h;
			
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin >> c[i][j];
				b[i][j]=false;
				if(c[i][j]=='@')
				{
					indx = i;
					indy = j;
				}
			}
		}
		
		counter(indx,indy,n,h);
		
		cout << "Case " << k << ": " << cnt << endl;
		
		cnt = 0;
		k++;
	}
	
}
