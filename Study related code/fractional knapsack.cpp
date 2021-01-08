#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<pair<float,pair<string,pair<float,float> > > > v;
	//cout <<"NUMBER OF ITEMS : ";
	int n,capacity;
	cin >> n >> capacity;
	for(int i=0;i<n;i++)
	{
		float wgt,prc;
		string str;
		float prcw;
		cin >> str >> prc >> wgt;
		prcw=prc/wgt;
		v.push_back(make_pair(prcw,make_pair(str,make_pair(prc,wgt))));
		//cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second.second << " " << v[i].second.second.first << endl;
	}
	sort(v.begin(),v.end());
	int totalprof=0;
    int k=n-1;
    cout << "ITEM NAME\tBOUGHT PRICE\tWEIGHT BOUGHT\tRemaining Weight\n";
    while(capacity>0)
    {
    	if(v[k].second.second.second<=capacity)
    	{
    		totalprof+= v[k].second.second.first;
    		capacity = capacity - v[k].second.second.second;
    		cout << v[k].second.first << "\t" << v[k].second.second.first << "\t" << v[k].second.second.second << "\t" << 0 << endl;
		}
		else
		{
			totalprof+=capacity*v[k].first;
			//capacity=0;
			cout << v[k].second.first << "\t" << capacity*v[k].first << "\t" << capacity << "\t" << v[k].second.second.second-capacity << endl;
			capacity=0;
		}
		k--;
	}
	cout << "TOTAL PROFIT : " << totalprof << endl;
}

