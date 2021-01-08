#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,k;
	cin >> n >> k;
    vector < pair<ll,ll> > v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		v.push_back(make_pair(x,x));
	}
	ll index=0;
	ll min=1000000009;
	ll csum=0;
	for(int i=0;i<n;i++)
	{
		csum+=v[i].second;
		if(i==k-1)
		{
			if(v[i].second<min)
		    {
		    	index=i;
		    	min=csum;
			}
		}
		else if(i>k-1)
		{
		    v[i].second=csum-v[i-k].first;
		    csum=v[i].second;
		  //  cout << csum << " " << min << endl;
		    if(csum<min)
		    {
		    	index=i;
		    	min=v[i].second;
			}
		}
		//cout << csum << " " << index <<  endl;
	}
	//ll sum_of_elems = std::accumulate(MyVector.begin(), MyVector.end(), 0);
	cout << index-k+2 << endl;
}
