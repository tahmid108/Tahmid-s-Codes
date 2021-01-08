#include<bits/stdc++.h>
using namespace std;


// not solved yet
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		long long a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		
		for(int i=0;i<n-2;i++){
			if(a[i+1]-a[i]>0 && a[i+2]-a[i+1]>0){
				a[i+1]*=-1;
			}
			else if(a[i+1]-a[i]<0 && a[i+2]-a[i+1]<0){
				a[i+1]*=-1;
			}
			
		}
		
		for(int i=0;i<n-1;i++){
			cout << a[i] << " " ;
		}
		cout << a[n-1] << endl;
	}
}
