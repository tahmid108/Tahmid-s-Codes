#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while(true)
	{
		getline(cin,s);
		if(s[0]=='0')
		break;
		
		long long dp[5001];
		
		dp[0]=1;dp[1]=1;
		
		for(int i=2;i<=s.size();i++)
		{
			dp[i]=0;
			
			char a = s[i-1]-'0';
			char b = s[i-2]-'0';
			
			if(b==1 || (b==2 && a<=6)) dp[i]+=dp[i-2];
			if(a!=0)dp[i]+=dp[i-1];
			
			
		}
		
		printf("%lld\n",dp[s.size()]);
	}
}
