#include<bits/stdc++.h>
using namespace std;

int countone(int x,int a)
{
	int l= x^a;
	int con=0;
	while(l)
	{
		if(l & 1)
		{
			con++;
		}
		l= l>>1;
	}
	return con;
}


int main()
{
	int m,n,k;
	cin >> m >> n >> k;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int x;
	cin >> x;
	int c=0;
	for(int i=0;i<n;i++)
	{
		int cnt = countone(x,a[i]);
		if(cnt<=k)
		{
			c++;
		}
	}
	cout << c << endl;
}
