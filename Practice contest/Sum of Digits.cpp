#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	cin.ignore();
	while(tc--)
	{
		string s;
		getline(cin,s);
	    long long sum=0;
	    for(int i=0;i<s.size();i++)
	    {
	    	sum+=(s[i]-48);
		}
		cout << sum << endl;
	}
}
