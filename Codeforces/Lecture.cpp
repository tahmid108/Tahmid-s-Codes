#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin >> m >> n;
	map<string,string> mp;
	while(n--)
	{
		string a,b;
		cin >> a >> b;
		mp[a]=b;
		mp[b]=a;
	}
	for(int i=0;i<m;i++)
	{
		string x;
		cin >> x;
		if(mp[x].size()>=x.size())
		{
			if(i!=m-1)
			{
				cout << x << " ";
			}
			else
			{
				cout << x << endl;
			}
		}
		else
		{
			if(i!=m-1)
			{
				cout << mp[x] << " ";
			}
			else
			{
				cout << mp[x] << endl;
			}
		}
	}
}
