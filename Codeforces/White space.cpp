#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	//cout << tc << endl;
	while(tc--){
		int a,b;
		cin >> a >> b;
		int cnt = 0;
		while(a>0 && b>0){
			if(a>=b && a!=1){
				a-=2;
				b-=1;
				cnt++;
			}
			else if (a==1 && b==1) break;
			else{
				a-=1;
				b-=2;
				cnt++;
			}
			
		}
		cout << cnt << endl;11
	}
}

