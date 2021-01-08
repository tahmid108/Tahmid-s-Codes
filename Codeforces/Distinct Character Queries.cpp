#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;
	cin.ignore();
	
	int car[s.size()+1];
	
	int cnt = 0;
	map<char,bool>mp;
	for(int i=0;i<s.size();i++)
		{
	    //	map<char,bool>mp;
			if(mp[s[i]]==0)
			{
				cnt ++;
				mp[s[i]]=1;
				car[i+1]=cnt;
			}
			else{
				car[i+1]=cnt;
			}
		}
		
   for(int i=1;i<=s.size();i++)
   cout << car[i] << endl;		
	
	int tc;
	cin >> tc;
	
	int a , b  ,c;
	
	while(tc--){
		cin >> a;
		char k;
	//	int cnt = 0;
		if(a==1){
			cin >> b >> k;
			if(s[b-1]!=k)
			{
				s[b-1]=k;
				if(mp[s[b-1]]==0){
				mp[k]=1;
				for(int i=b-1;i<s.size();i++)
				car[i]++;
			    }
			}
			
		}
		else if(a==2){
			cin >> b >> c;
			
			cout << car[c]-car[b] + 1 << endl;
		}
	}
}
