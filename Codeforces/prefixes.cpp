#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	string s;
	cin >> s;
	//int a=0,b=0;
	
	int cnt = 0;
	for(int i=0;i<n-1;i+=2)
	{
		if(s[i]==s[i+1])
		{
			if(s[i]=='a')
			s[i]='b';
			else
			s[i]='a';
			cnt++;
		}
	}
	cout << cnt << endl;
	cout << s << endl;
	
}
