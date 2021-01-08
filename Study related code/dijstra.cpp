#include<bits/stdc++.h>
using namespace std;
#define inf 10000007

int tn,n1,n2,wgt,src;
vector < vector < pair < int , int > > > al(10000);
vector < int > par;
vector < int > dis;
priority_queue < pair < int , int > > pq;
int main()
{
	cin >> tn;
	while(cin>>n1>>n2>>wgt)
	{
		if(n1==-1 && n2==-1 && wgt==-1)
		   break;
		al[n1].push_back(make_pair(n2,wgt)) ;
	}
	par.assign(tn,-1);
	dis.assign(tn,inf);
	cout << "ENTER SOURCE NODE :";
	cin >> src;
	dis[src]=0;
	pq.push(make_pair(-0,-src));
	while(!pq.empty())
	{
		pair < int , int > frnt ;
		frnt = pq.top();
		pq.pop();
		int d,v;
		d = -frnt.first;
		v = -frnt.second;
	}
}
