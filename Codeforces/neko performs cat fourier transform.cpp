#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	vector < pair <int,int> > v;
	map<int,bool>mp;
	for(int i=0;i<30;i++)
	{
		v.push_back(make_pair(i,powl(2,i)-1));
	//	cout << v[i].first << " " << v[i].second << endl;
	    mp[v[i].second]=true;
	}
	int count = 0;
	int k = 0;
	vector<int>ansl;
	while(k<40)
	{
		if(mp[x]==true)
		{
			break;
		}
		int min_ = 1000007,ans,indx;
		for(int i=0;i<v.size();i++)
		{
			ans = abs(x-v[i].second);
			if(ans<min_)
			{
				min_ = ans;
				indx = i;
			}
		}
	//	cout << x << " XOR " << v[indx].second << endl;
		x^=v[indx].second;
		
		ansl.push_back(indx);
	//	cout << x << endl;
	    
		if(mp[x]==true)
		{
	//		cout << "XOR ER PORE BREAK";
			count++;
			break;
		}
         
		    count++;
			x++;
	//		cout << x << endl;	
	
		
		if(mp[x]==true)
		{
			count++;
	//	    cout << "x++ er pore break";
			break;
		}
		count++;
		k++;
	//	cout << count << endl;
	}
	cout << count << endl;
	double t = count ;
	for(int i =0 ;i<ansl.size() ; i++)
	{
		if(i==ansl.size()-1)
		cout << ansl[i] << endl;
		else
		cout << ansl[i] << " ";
	}
	//cout << endl;
}
