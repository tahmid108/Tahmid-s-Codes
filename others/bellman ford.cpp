#include<bits/stdc++.h>
using namespace std;
#define inf 1000000

int node1,node2,tn,wgt,edn,src,dis;
vector <  vector < pair < int , int > > >  al(10000);
vector <int> par;
vector <int> dist;

int pathfind(int dis)
{
	if(dis!=src && par[dis]==-1)
	{
		cout << "NO PATH " <<endl;
		return 0;
	}
	if(src==dis)
	{
		cout << dis << " ";
		return 0;
	}
	pathfind(par[dis]);
	cout << dis << " ";
}

int main()
{
	cin >> tn >> edn;
	while(edn--)
	{
		cin >> node1 >> node2 >> wgt;
	}
	par.assign(tn,-1);
	dist.assign(tn,inf);
	cout << "Enter source node  : ";
	cin >> src;
	dist[src]=0;
	
	for(int i=0;i<tn-1;i++)
	{
		for(int u=0;u<tn;u++)
		{
			for(int j=0;j<al[i].size();j++)
			{
				pair < int , int > v = al[u][j];
				if(dist[u]==inf)
				continue;
				if(dist[u]+v.second < dist[v.first])
				{
					dist[v.first]=dist[u]+v.second;
					par[v.first]=u;
				} 
			}
		}
	}
	bool cl=false;
	for(int u=0;u<tn;u++)
	{
		for(int j=0;j<al[u].size();j++)
		{
			pair < int , int > v = al[u][j];
			if(dist[u]==inf)
			continue;
			if(dist[u]+v.second < dist[v.first])
			{
				cl=true;
				break;
					//dist[v.first]=dist[u]+v.second;
					//par[v.first]=u;
		    } 
		}
		if(cl)
		break;
	}
	if(cl)
	cout << "HAS A NEGATIVE CYCLE\n";
	else
	{
		cout << "ENTER DESTINATION:";
		cin >> dis;
		cout << "DESTINATION : " << dist[dis] << endl;
		pathfind(dis);
	}
	
}
