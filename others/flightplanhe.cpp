#include<bits/stdc++.h>
using namespace std;
#define inf 1000000

int n,m,t,c,n1,n2,src,dst;
vector < vector < pair < int , int > > > v (10000);
vector <int> par;
vector <int> dist;
priority_queue< pair <int,int> >pq;

int pathfind(int dst)
{
	if(dst==src)
	{
		cout << src << " ";
		return 0;
	}
	pathfind(par[dst]);
	cout << " " << dst;
}

int main()
{
	cin >> n >> m >> t >> c;
	while(m--)
	{
		cin >> n1 >> n2;
		v[n1].push_back(make_pair(n2,1));
		v[n2].push_back(make_pair(n1,1));
	}
	cin >> src;
	par.assign(n,-1);
	dist.assign(n,inf);
	
	dist[src]=1;
	
	pq.push(make_pair(-1,src));
	
	while(!pq.empty())
	{
		pair <int,int> frnt = pq.top();
		int d = -frnt.first;
		int u = -frnt.second;
		pq.pop();
		if(d>dist[u])
		  continue;
		for(int i=0;i<v[u].size();i++)
		{
			pair <int,int> vx = v[u][i];
		    if(dist[u]+vx.second<dist[vx.first])
		    {
		    	dist[vx.first]=dist[u]+vx.second;
		    	par[vx.first]=u;
		    	pq.push(make_pair(-dist[vx.first],-vx.first));
			}
		}
		
	}
	
	cin >> dst;
	cout << dist[dst]<<endl;
	
	pathfind(dst);
	cout << endl;
}
