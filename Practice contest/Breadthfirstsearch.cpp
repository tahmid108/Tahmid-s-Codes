#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int nodes,edges;
		cin >> nodes >> edges;
		queue<int> q;
		vector < vector <int> > v(10000);
		for(int i=1;i<=edges;i++)
		{
			int x,y;
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		int dist[nodes+1]={0};
		bool visited[nodes+1]={false};
		int src;
		cin >> src;
		visited[src]=1;
		q.push(src);
		while(!q.empty())
		{
			int x = q.front();
			q.pop();
			//int r=v[x].begin();
			//int l=v[x].end();
			for(int i=0;i<v[x].size();i++)
			{
				int l=v[x][i];
				if(!visited[l])
				{
					visited[l]=true;
					dist[l]=dist[x]+6;
					q.push(l);
				}
			}
		}
		for(int i=1;i<=nodes;i++)
		{
			if(i==src)
			continue;
			else if(i==nodes)
			{
				if(dist[i]==0)
				cout << -1 << endl;
				else
				cout << dist[i] << endl;
			}
			else
			{
				if(dist[i]==0)
				cout << -1 << " ";
				else
				cout << dist[i] << " ";
				
			}
			
		}
	}
}
