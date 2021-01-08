#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	while(cin >> n >> m , n!=0 && m!=0)
	{
		int u,v;
		vector <int> a[n+1];
		int ind[n+1];
		
		memset(ind,0,sizeof(ind));
		
		for(int i=1;i<=m;i++)
		{
			cin >> u >> v;
			a[u].push_back(v);
			ind[v]++;
		}
		
		queue <int> q;
		vector <int> ans;
		
		for(int i=1;i<=n;i++)
		if(ind[i]==0)q.push(i);
		
		while(!q.empty())
		{
			u = q.front();
			q.pop();
			ans.push_back(u);
			
			for(unsigned i=0;i<a[u].size();i++)
			{
				v = a[u][i];
				--ind[v];
				if(ind[v]==0)q.push(v);
			}
		}
		
		for(int i=0;i<n;i++)
		{
			if(i==n-1)cout << ans[i] << endl;
			else
			cout << ans[i] << " " ;
		}
	}
    return 0;
}

