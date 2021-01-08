#include<bits/stdc++.h>
using namespace std;

int main()
{
	int nodes,edges,src,dst,x,y;
	cin >> nodes >> edges;
	vector < vector <int> > v(1000);
	stack <int> s;
	while(edges--)
	{
		cin >> x >> y;
		v[x].push_back(y);
		//v[y].push_back(x);
	}
	cin >> src;
	int dist[nodes+1]={0};
	bool visited[nodes+1]={false};
	
	visited[src]=true;
	s.push(src);
	cout << src << endl;
	int l=s.top();
	s.pop();
	while(1)
	{
		
		//s.pop()
		for(int i=0;i<v[l].size();i++)
		{
			int ss= v[l][i];
			if(!visited[ss])
			{
				visited[ss]=true;
			    dist[ss]=dist[l]+1;	
			    s.push(ss);
			}
			if(s.empty())
			{
				break;
			}
			else
			{
				cout << s.top()<< endl;
				s.pop();
				
			}
		}
	}
	cin >> dst;
	cout << "DESTIANTION COST : " << dist[dst] << endl;
}
