#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	int ans = a-b;
	if(ans%10==9)
	ans--;
	else
	ans++;
	
	cout << ans << endl;
}
