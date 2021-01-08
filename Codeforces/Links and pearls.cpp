#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	long long count=0,count1=0;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='-')
		count++;
		else if(s[i]=='o')
		count1++;
	}
	if(count1==0){
	cout<<"YES"<<endl;
	return 0;
    }
	if(count%count1==0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
