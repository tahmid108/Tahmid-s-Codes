#include<bits/stdc++.h>
using namespace std;
#define INF 999999

int minDistance(int dist[],bool visited[],int V)
{
	int min = INF , mindex;
	for(int i=0;i<V;i++)
	{
		if(dist[i]<min && visited[i]==false)
		{
			min = dist[i];
			mindex = i;
		}
	}
	return mindex;
}

int main()
{
	int V;
	cin >> V;
	int graph[V][V];
	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
		    cin >> graph[i][j];
	}
	int dist[V];
	bool visited[V];
	
	for(int i=0;i<V;i++)
	{
	    dist[i] = INF;
		visited[i] = false;	
	}
	int src;
	cin >> src;
	
	dist[src] = 0;
	
	for(int cnt = 0; cnt<V-1 ; cnt++)
	{
		int u = minDistance(dist,visited,V);
		
		visited[u] = true;
		
		for(int v=0;v<V;v++)
		{
			if(!visited[v] && graph[u][v] && dist[u]!=INF && dist[u]+graph[u][v]<dist[v] )
			dist[v] = dist[u]+graph[u][v]; 
		}
	}
	
	printf("Vertex \t\t Distance from Source\n"); 
    for (int i = 0; i < V; i++) 
        printf("%d \t\t %d\n", i, dist[i]); 
	
}
