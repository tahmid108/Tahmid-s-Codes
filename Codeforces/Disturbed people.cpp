#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<int , bool > mp;
	int n;
	cin >> n;
    vector<pair<bool , bool > > v;
	int counter=0;
	
	for(int i=0;i<n;i++)
	{
		bool x;
		cin >> x;
		if(x==1)
		v.push_back(make_pair(x,false));
		else
		v.push_back(make_pair(x,true));
	}
	
	for(int i=0;i<n-1;i++)
	{
		if(v[i].first==0 && v[i].second==true)
		{
			/*if(v[i+1].first==1 && v[i-1].first==1 && v[i+2].first==0)
			{
				counter++;
				v[i+2].second=false;
			}*/
			if(v[i+1].first==1 && v[i-1].first==1)
			{
				counter++;
				v[i+1].first=0;
			}
	    }
	}
	
	cout << counter << endl;
	
	
	
	//cout << counter << endl;
}
