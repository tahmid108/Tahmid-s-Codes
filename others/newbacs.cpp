#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int k=1;
	cin >> t;
	while(t--)
	{
		int p,n;
		long long st,en;
		vector<long long> v;
//		vector<long long> c;
		cin >> n >> p;
		for(int i=0;i<n;i++)
		{
			cin >> st >> en ;
			for(int j=st;j<=en;j++)
			v.push_back(j);
		}
		sort(v.begin(),v.end());
		
		int min=v[v.size()-1];
		int x1,x2; 
		for(int i=0;i<v.size()-p;i++)
		{
			x1=v[i];
			x2=v[i+p-1];
			if((x2-x1)<min)
			min = x2-x1;
		}
    
        cout << "Case "<<k<<": "<<min <<endl;
        k++;
	}
}
