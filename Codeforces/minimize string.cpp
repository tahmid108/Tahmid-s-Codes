#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	string str;
	cin >> str;
	int i;
	for(i=1;i<str.size();i++)
	{
		if(str[i]<str[i-1])
		{
			str.erase(str.begin()+i-1);
			break;
		}
	}
	if(i==n)
	{
		cout << str.substr(0,i-1);
	}
	else
	{
		cout << str << endl;
	}
}
