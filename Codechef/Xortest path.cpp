#include<bits/stdc++.h>
#define inf 1000000009
using namespace std;

int main()
{
	long long n,e,q;
	vector < vector < pair < long long ,long long > > > v(100006);
	vector <long long> dist;
	cin >> n >> e >> q;
	while(e--)
	{
	    long n1,n2,wgt;
	    cin >> n1 >> n2 >> wgt;
	    v[n1].push_back(make_pair(n2,wgt));
	    v[n2].push_back(make_pair(n1,wgt));
	}
	/*for(int i=0;i<v;i++)
	{
		cout << v[i].first << " " << v[i].second << endl;
	}*/
	while(q--)
	{
		priority_queue < pair < long long, long long > > pq;
		long long src , dst;
		dist.assign(n+1,inf);
		cin >> src >> dst;
		dist[src]=0;
		pq.push(make_pair(-0,-src));
		while(!pq.empty())
		{
			//cout << "DHUKSE\n";
			pair < long long , long long > frnt;
			frnt = pq.top();
			pq.pop();
			long long d=-frnt.first;
			long long u=-frnt.second;
			if(d>dist[u])
			continue;
			for(int i=0;i<v[u].size();i++)
			{
				pair < long long,long long > vd  = v[u][i];
				if((dist[u]^vd.second)<dist[vd.first])
				{
					dist[vd.first]=(dist[u]^vd.second);
					pq.push(make_pair(-dist[vd.first],-vd.first));
				}
			}
			
		}
		if(dist[dst]==inf)
		{
			cout << "XIT\n";
		}
		else 
		cout << dist[dst] << endl;
		
	}
}
