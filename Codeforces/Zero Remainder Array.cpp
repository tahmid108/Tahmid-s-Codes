#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int tc;
	cin >> tc;
	while(tc--){
		int n,k;
		cin >> n >> k;
		long long a[n];
		bool flag = 1;
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]%k!=0) flag=0;
		}
		sort(a,a+n);
		
		if(flag==1) {
			cout << 0 << endl;
		}
		else{
		/*	int cnt = 1;
			map <int,bool> mp;
			for(int i=0;i<n;i++)
			{
				if((a[i]+cnt)%k==0 && mp[a[i]]==false){
					mp[a[i]] = true;
				}
				cnt++;
			}*/
		}
		
	}
}
