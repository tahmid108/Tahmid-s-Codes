#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		long long n;
		cin >> n;
		long long a[n+1];
		a[0]=0;
	    vector < pair <long long,long long> > v;
	    v.push_back(make_pair(0,0));
	    for(int i=1;i<=n;i++)
	    {
	    	cin >> a[i];
		}
		for(int i=1;i<=n;i++)
		{
			v.push_back(make_pair(a[i],i));
		}
		sort(v.begin(),v.end());
		bool flag=0;
		int k;
		for(int i=1;i<=n;i+=k)
		{
			k=0;
			pair<long long,long long> y=v[i];
			for(int j=i+1;v[j].first==y.first;j++)
			{
				
				if(a[v[j].second]!=a[v[i].second])
				{
					cout << "LOOP KI EKHANE CHOLTESE ?" << endl;
					flag=1;
					break;
				}
				k++;
			}
			if(flag==1)
			break;
		}
		if(flag==0)
		cout << "Poor Chef\n";
		else
		cout << "Truly Happy\n";
	}
}
