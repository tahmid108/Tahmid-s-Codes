#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		queue<int>q;
		vector< vector< int > >v(1000);
		int nodes,dst;
		cin >> nodes >> dst;
		cin.ignore();
		for(int i=0;i<nodes;i++)
		{
			string s;
			getline(cin,s);
			for(int j=0;j<nodes;j++)
			{
				if(s[j]=='1')
				{
					v[i].push_back(j);
					v[j].push_back(i);
				}
			}
		}
		int dist[nodes+1]={0};
		bool visited[nodes+1]={false};
		int src=0;
		//cin >> src;
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
					dist[l]=dist[x]+1;
					q.push(l);
				}
			}
		}
		cout << dist[dst] << endl;
	}
}
