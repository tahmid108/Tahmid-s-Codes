#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <utility>
using namespace std;

list<int> adj[20005];
int team[20005];

int main()
{
	int tc,nd;
	int t=1;
	
	scanf("%d",&tc);
	
	
	while(t<=tc)
	{
		int n;
		scanf("%d",&n);
		
		memset(team,0,sizeof team);
		for(int i=0;i<20005;i++)
		  adj[i].clear();
		
		while(n--)
		{
			int u,v;
			scanf("%d %d",&u,&v);
			adj[u].push_back(v);
			adj[v].push_back(u);
		//	cout << "Why the fuck \n";
		}
		
		int max_ = 0 ;
		
		for(int i=0;i<20005;i++)
		{
			if(!adj[i].empty() && team[i]==0)
			{
				int  team1 = 0 , team2 = 0; 
				queue<int>q;
				
				q.push(i);
				team[i]=1;
				team1++;
				
				while(!q.empty())
				{
					nd = q.front();
				//	cout << "NODE : " << nd << endl;
					q.pop();
					for(list<int>::iterator it = adj[nd].begin(); it != adj[nd].end(); it++)
					{
						if(team[*it]==0)
						{
							q.push(*it);
							if(team[nd]==1)
							{
								team[*it]=2;
								team2++;
				//				cout << "ITERATOR team2++ te " << *it << endl;
							}
							else
							{
								team[*it]=1;
								team1++;
				//				cout << "TEAM1 ++ \n";
							}
							
						}
					}
					
				}
				max_ += max(team1,team2);
			}
		}
		printf("Case %d: %d\n",t,max_);
		t++;
	}
}
