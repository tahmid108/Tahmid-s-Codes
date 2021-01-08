#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	string s;
	cin >> n >> k;
	cin.ignore();
	cin >> s;
	
	if(n==1)
	{
		if(s[0]!='0' && k>0)
		{
			cout << "0" << endl;
			k--;
			return 0;
		}
		else{
			cout << s << endl;
			return 0;
		}
		
	}
	
	if(s[0]!='1' && k>0)
	{
		s[0]='1';
		k--;
	}
	
	for(int i=1;i<n;i++)
	{
		if(s[i]!='0' && k>0)
		{
			s[i]='0';
			k--;
		}
	}
	
	cout << s << endl;
}
