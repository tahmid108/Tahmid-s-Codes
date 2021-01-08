#include<bits/stdc++.h>
using namespace std;
#define INF 9999999


int mindist(int dist[],bool visited[],int n)
{
	int mini = INF , mindex;
	for(int i=1;i<=n;i++)
	{
		if(!visited[i] && dist[i]<mini)
		{
			mini = dist[i];
			mindex = i;
 		}
	}
	return mindex;
}

int main()
{

	int n,m,k;
	cin >> n >> m >> k;
	map <int,bool> a;
	int graph[n+1][m+1]={0};
	for(int i=0;i<k;i++)
	{
		int temp ;
		cin >> temp;
		a[temp]=true;
	}
	
	for (int i =0;i<m;i++)
	{
		int x1,x2,cost;
		cin >> x1 >> x2 >> cost;
		graph[x1][x2]= cost;
	//	v.push_back(make_pair(make_pair(x1,x2),cost));
	}
	
	bool visited[n];
	int dist[n];
	
	for(int i=1;i<=n;i++){
		dist[i] = INF;
		visited[i] = false;
	}
	int globmin = INF;
	vector <int> gb;
    for(int i=0;i<k;i++)
    {
    	int src = a[i];
    	
    	dist[src] = 0;
    	
    	for(int cnt=1;cnt<n;cnt++)
    	{
    		int u = mindist(dist,visited,n);
    		
    		visited[u] = true;
    		cout << u << endl;
    		
    		for(int V=1;V<=n;V++)
    		{
    			if(!visited[V]  && dist[u]!=INF && dist[u]+graph[u][V]<dist[V])
    			{
    				cout << V << endl;
    				dist[V] = dist[u]+graph[u][V];
    				if(dist[V]<globmin && a[V]==true)
    				{
    					cout << V << " For Special Nodes entered\n";
    					globmin = dist[V];
    					gb.push_back(globmin);
					}
				}
			}
		}
		
		
	}
	sort(gb.begin(),gb.end());
	cout << gb[0] << endl;
	
	
}
