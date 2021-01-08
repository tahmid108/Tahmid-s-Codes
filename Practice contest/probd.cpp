#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int k=1;
	cin.ignore();
	while(k<=n)
	{
		string str1,str2;
		getline(cin,str1);
		map<int,int> mp;
		map<int,int> mp2;
		bool flag=0;
		int count=0;
		for(int i=0;i<str1.size();i++)
		{
			if(str1[i]>=65 && str1[i]<=90)
			{
				mp[str1[i]]++;
				mp[str1[i]+32]++;
			}
			else if(str1[i]>=97 && str1[i]<=122)
			{
				mp[str1[i]]++;
				mp[str1[i]-32]++;
			}
		}
		/*for(int i=0;i<mp.size();i++)
		{
			cout << mp[i] << " " << i << endl;
		}*/
	     getline(cin,str2);
		for(int i=0;i<str2.size();i++)
		{
			if(str2[i]>=65 && str2[i]<=90)
			{
				mp2[str2[i]]++;
				mp2[str2[i]+32]++;
			}
			else if(str2[i]>=97 && str2[i]<=122)
			{
				mp2[str2[i]]++;
				mp2[str2[i]-32]++;
			}
		}
		/*for(int i=0;i<mp2.size();i++)
		{
			cout << mp2[i] << " " << i << endl;
		}
		/*if(mp.size()!=mp2.size())
		{
			flag=1; 
		}*/
		for(int i=65;i<=122;i++)
		{
			if(mp[i]==mp2[i])
			count++;
		}
		if(count==(122-65)+1)
		cout << "Case " << k << ": " << "Yes\n";
		else
		cout << "Case " << k << ": " << "No\n";
		k++;
	}
}
