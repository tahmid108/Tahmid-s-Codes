#include <bits/stdc++.h>
#define INF 999999999
using namespace std;

void floydWarshall( vector < vector<int> > graph, int V, vector < vector<int> > parent)
{
    vector < vector<int> > dist = graph;
    vector < vector<int> > graph2(V+1,vector <int> (V+1, INF));
    for(int i =1; i<=V; i++)
    {
        graph2[i][i] = 0;
    }
    vector < vector<int> > parent2 = parent;

    for(int k=1; k<=V; k++)
    {
        for(int i =1; i<=V; i++)
        {
            for(int j=1; j<=V; j++)
            {
                if(graph[i][j] > graph[i][k] + graph[k][j])
                {
                    graph2[i][j] = graph[i][j];
                    parent2[i][j] = parent[i][j];
                    graph[i][j] = graph[i][k]+graph[k][j];
                    parent[i][j]= parent[k][j];
                }
            }
        }
    }
     for(int k=1; k<=V; k++)
    {
        for(int i =1; i<=V; i++)
        {
            for(int j=1; j<=V; j++)
            {
                if(dist[i][j] > dist[i][k] + dist[k][j] && dist[i][k] + dist[k][j]  > graph[i][j])
                {
                    ///graph2[i][j] = graph[i][j];
                    ///parent2[i][j] = parent[i][j];
                    dist[i][j] = dist[i][k]+dist[k][j];
                    graph2[i][j] = dist[i][j];
                    parent2[i][j]= parent2[k][j];
                }
            }
        }
    }

    cout << "1st Distance Graph: \t2nd Distance Graph:\tDIst Graph:\n";
    for(int i = 1; i<=V; i++)
    {
        for(int j = 1; j<=V; j++)
        {
            if(graph[i][j] == INF)
            {
                cout << "*"<<"  ";
            }
            else
            {
                cout << graph[i][j]<<"  ";

            }

        }
        cout <<" \t";
         for(int j = 1; j<=V; j++)
        {
            if(graph2[i][j] == INF)
            {
                cout << "*"<<"  ";
            }
            else
            {
                cout << graph2[i][j]<<"  ";

            }

        }
        cout <<" \t";
         for(int j = 1; j<=V; j++)
        {
            if(dist[i][j] == INF)
            {
                cout << "*"<<"  ";
            }
            else
            {
                cout << dist[i][j]<<"  ";

            }

        }
        cout << endl;
    }
    cout << endl<< endl<< "1st Parent graph: \t2nd Parent graph: \n";
    for(int i = 1; i<=V; i++)
    {
        for(int j = 1; j<=V; j++)
        {
            cout << parent[i][j]<<"  ";
        }
        cout << " \t";
        for(int j = 1; j<=V; j++)
        {
            cout << parent2[i][j]<<"  ";
        }
        cout << endl;
    }



}
int main()
{
    ifstream in("input.txt");
    int V,E;
    in >> V >> E;
    vector <vector <int> > graph(V+1, vector<int> (V+1));
    vector < vector<int> > parent(V+1, vector<int> (V+1));
    for(int i =1; i<V+1; i++)
    {
        for(int j = 1; j<=V; j++)
        {
            if(i == j)
            {
                graph[i][j] = 0;
            }
            else
            {
                graph[i][j] = INF;
            }
            parent[i][j] = i;
        }
    }
    int u,v,w;
    for(int i = 0; i<E; i++)
    {
        in >> u >> v >> w;
        graph[u][v] = w;
    }
    ///dist = graph;
    floydWarshall(graph,V,parent);
    return 0;
}





















