#include<bits/stdc++.h>
using namespace std;

vector < vector <  pair < int , int > > >  v (10000);
vector < string > vs;


int main()
{
	int tc,nc;
	cin >> tc;
	
	while(tc--)
	{
		cin >> nc;
		int i=1;
		string s;
		while(i<=nc)
		{
			cin.ignore();
			getline(cin,s);
			vs[i]=s;
			int nei,n1,wgt;
			cin >> nei ;
			while (nei--)
			{
				cin >> n1 >> wgt ;
				v[i].push_back(make_pair(n1,wgt));
			}
		}
	}
	
}
