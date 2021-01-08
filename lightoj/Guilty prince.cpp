#include<bits/stdc++.h>
using namespace std;
char a[21][21];
bool b[21][21];

int getdistup(int i,int j,int n ,int m);
int getdistdown(int i,int j,int n,int m);
int getdistleft(int i,int j,int n,int m);
int getdistright(int i,int j,int n,int m);



int getdistright(int i,int j,int n ,int m)
{
	cout << "DHUKSE RIGHT\n";
	if(i<0 || i>n-1 || j<0 || j>m-1)
	return 0;
	if(a[i][j]=='#' || a[i][j]=='@')
	return 0;
	if(a[i][j]=='.' && b[i][j]==0)
	{
		b[i][j]=1;
		return 1+getdistup(i-1,j,n,m)+getdistdown(i+1,j,n,m)+getdistleft(i,j-1,n,m)+getdistright(i,j+1,n,m);
	}
	if(a[i][j]=='.' && b[i][j]==1)
	{
		return 0;
	}
	
}

int getdistleft(int i,int j,int n ,int m)
{
		cout << "DHUKSE lft\n";
	if(i<0 || i>n-1 || j<0 || j>m-1)
	return 0;
	if(a[i][j]=='#' || a[i][j]=='@')
	return 0;
	if(a[i][j]=='.' && b[i][j]==0)
	{
		b[i][j]=1;
		return 1+getdistup(i-1,j,n,m)+getdistdown(i+1,j,n,m)+getdistleft(i,j-1,n,m)+getdistright(i,j+1,n,m);
	}
	if(a[i][j]=='.' && b[i][j]==1)
	{
		return getdistup(i-1,j,n,m)+getdistdown(i+1,j,n,m)+getdistleft(i,j-1,n,m)+getdistright(i,j+1,n,m);
	}
	
}

int getdistdown(int i,int j,int n ,int m)
{
	cout << "Dhukse down\n";
	
	if(i<0 || i>n-1 || j<0 || j>m-1)
	return 0;
	if(a[i][j]=='#' || a[i][j]=='@')
	return 0;
	if(a[i][j]=='.' && b[i][j]==0)
	{
		b[i][j]=1;
		return 1+getdistup(i-1,j,n,m)+getdistdown(i+1,j,n,m)+getdistleft(i,j-1,n,m)+getdistright(i,j+1,n,m);
	}
	if(a[i][j]=='.' && b[i][j]==1)
	{
		return getdistup(i-1,j,n,m)+getdistdown(i+1,j,n,m)+getdistleft(i,j-1,n,m)+getdistright(i,j+1,n,m);
	}
	
}


int getdistup(int i,int j,int n ,int m)
{
    cout << a[i][j]<< endl;
	cout << "Dhukse up\n";
	if(i<0 || i>n-1 || j<0 || j>m-1)
	return 0;
	if(a[i][j]=='#' || a[i][j]=='@')
	return 0;
	if(a[i][j]=='.' && b[i][j]==0)
	{
		b[i][j]=1;
		return 1+getdistup(i-1,j,n,m)+getdistdown(i+1,j,n,m)+getdistleft(i,j-1,n,m)+getdistright(i,j+1,n,m);
	}
	if(a[i][j]=='.' && b[i][j]==1)
	{
		return getdistup(i-1,j,n,m)+getdistdown(i+1,j,n,m)+getdistleft(i,j-1,n,m)+getdistright(i,j+1,n,m);
	}
	
}

int main()
{
	int tc;
	cin >> tc ;
	int k=1;
	while(k<=tc)
	{
		int n,m;
		cin >> n >> m;
	//	char a[n][m];
		int index = 0,index2 = 0;
	//	bool b[n][m];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin >> a[i][j];
				b[i][j]=0;
				if(a[i][j]=='@')
				{
					index = i;
					index2 = j;
				}
			}
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout << a[i][j] ;
			}
			cout << endl;
		}
		
		int x = getdistup(index-1,index2,m,n)+getdistdown(index+1,index2,m,n)+getdistleft(index,index2-1,m,n)+getdistright(index,index2+1,m,n);
		
		cout << "Case " << k << ": " << x << endl;
		
		k++;
	}
}
