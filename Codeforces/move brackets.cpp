#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n;
		cin >> n;
		cin.ignore();
		string s;
		cin >> s;
		
		int cnt1 =0 , cnt2 = 0, cnt = 0;
		for(int i = 0;i<n;i++){
			if(s[i]=='('){
				cnt1++;
			}
			if(s[i]==')'){
				cnt2++;
				if (cnt2>cnt1) {
				cnt++;
				cnt1=0;
				cnt2=0;
				}
			}
			
		}
		cout << cnt << endl;
	}
}
