#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int x,y,n;
		cin >> x >> y >> n;
		int f = n%x;
		if(f==y) cout << n << endl;
		else{
			int ans1 = n-f;
			int ans2 = n + (x-f);
			ans1 = ans1 - (x-y);
			ans2 = ans2 - (x-y);
			if(ans2>n){
				if(ans1<1) cout << 0 << endl;
			    else cout << ans1 << endl;
			}
			else
			cout << ans2 << endl;
		}
	}
}
