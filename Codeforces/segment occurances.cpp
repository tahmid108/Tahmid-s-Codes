#include<bits/stdc++.h>
using namespace std;


int occur(string s,string t)
{
	int occurrences = 0;
   string::size_type pos = 0;
   //string target = "Foo";
   while ((pos = s.find(t, pos )) != std::string::npos) {
          ++ occurrences;
          pos += t.length();
   }
   return occurrences;
}
int main()
{
	int n,m,q;
	cin >> n >> m >> q;
	string s,t,ss;
	cin.ignore();
	getline(cin,s);
	getline(cin,t);
	int x,y,ans;
	for(int i=0;i<q;i++)
	{
		ss="\0";
		cin >> x >> y;
		for(int j=x-1;j<y;j++)
		{
			ss+=s[j];
		}
		//cout << ss << endl;
        ans = occur(ss,t);
        cout << ans << endl;
	}
}
