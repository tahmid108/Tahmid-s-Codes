#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int x = 2*n;
	
	int a[x+1];
	vector< pair < bool , pair<int,int> > > v(n+1,make_pair(false,make_pair(0,0)));
	//v.push_back(make_pair(false,make_pair(0,0)));
	
	for(int i=0;i<x;i++)
	{
		cin >> a[i];
		if(v[a[i]].first==false)
		{
		//	cout << "ifedhuk" <<  a[i] << " " << i << endl;
			v[a[i]].first=true;
			v[a[i]].second.first=i;
		}
		else
		{
		//	cout << "else e dhuk " << a[i] << " " << i << endl;
			v[a[i]].second.second=i;
		}
	}
	
	long long dist=0;
	
	for(int i=1;i<=n;i++)
	{
		dist+=min((abs(v[i].second.first-v[i-1].second.first)+abs(v[i].second.second-v[i-1].second.second)),(abs(v[i].second.first-v[i-1].second.second)+abs(v[i].second.second-v[i-1].second.first)));
		
	}
	cout << dist << endl;
	
	
}
