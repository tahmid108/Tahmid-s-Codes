#include<bits/stdc++.h>
using namespace std;

int knapsack(int p[],int w[],int wt,int n)
{
	int T[n+1][wt+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=wt;j++)
		{
			if(i==0 || j==0)
			T[i][j]=0;
			else if(w[i-1]<=j)
			T[i][j] = max(p[i-1]+T[i-1][j-w[i-1]],T[i-1][j]);
			else
			T[i][j] = T[i-1][j];
		}
	}
	return T[n][wt];
}

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n;
		cin >> n;
		int p[n+1];
		int w[n+1];
		for(int i=0;i<n;i++)
		{
			cin >> p[i] >> w[i];
		}
		int g;
		cin >> g;
		int sum=0;
		int ans;
		while(g--)
		{
			int wt;
			cin >> wt;
		    ans = knapsack(p,w,wt,n);
			sum+=ans;
		//	cout << ans << endl;
		}
		cout << sum << endl;
	}
}
