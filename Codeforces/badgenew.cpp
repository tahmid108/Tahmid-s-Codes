#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,ans=0;
	cin >> a >> b >> c ;
	
	for(int i=0;i<=a;i++)
	for(int j=0;j<=b;j++)
	if(i+j==c)
	ans++;
	
	cout << ans << endl;
}
