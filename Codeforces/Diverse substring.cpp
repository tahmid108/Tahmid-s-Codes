#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	cin.ignore();
	getline(cin,s);
	bool flag=0;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]!=s[i+1])
		{
			flag=1;
			cout << "YES\n";
			cout << s[i] << s[i+1] << endl;
			break;
		}
	}
	if(flag==0)
	{
		cout << "NO" << endl;
	}
}
