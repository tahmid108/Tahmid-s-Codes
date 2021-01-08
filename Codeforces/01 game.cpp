#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
	
	string s;
	cin.ignore();
	cin >> s;
    int cnt = 0;
	while(true){
		string temp = "";
		bool flag = 0;
		for(int i=0;i+1<s.size();i++)
		{
			if(s[i]!=s[i+1]){
				flag = 1;
				for(int j=i+2;j<s.size();j++) temp+=s[j];
				break;
			}
			temp+=s[i];
		}
		if(!flag) break;
		cnt++;
		s = temp;
	}
	   if(cnt&1) cout << "DA\n";
	   else cout << "NET\n";
}

}
