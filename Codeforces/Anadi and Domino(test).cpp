#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	
	vector < int > v[m];
	
	/*bool comp(int a[],int b[])
	{
		return a.size()>b.size;
	}*/
	
	for(int i=0;i<m;i++)
	{
		int u,v1;
		cin >> u >> v1;
		v[u].push_back(v1);
		v[v1].push_back(u);
	}
	
	//sort(v.begin(),v.end,comp)
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	
	
}
