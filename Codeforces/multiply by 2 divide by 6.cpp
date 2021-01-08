#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin >> tc;
	while(tc--)
	{
		long long n;
		cin >> n;
		long long temp = n;
		int cnt = 0;
		bool flag = 0;
		while(temp!=1)
		{
			if(temp%6!=0 && (temp*2)%6!=0){
				flag = 1;
				break;
			}
			else if(temp%6==0) temp /= 6;
			else temp*=2;
			cnt++;
		}
		if(flag==1) cout << -1 << endl;
		else cout << cnt << endl;
	}
}
