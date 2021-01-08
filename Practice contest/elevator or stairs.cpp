#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,z,t1,t2,t3;
	cin >> x >> y >> z >> t1 >> t2 >> t3;
	int ans1,ans2;
	ans1=abs(x-y)*t1;
	ans2=abs(x-z)*t2+2*t3+abs(x-y)*t2+t3;
	//cout << ans1 << " " << ans2 << endl;
	if(ans1<ans2)
	cout << "NO\n" ;
	else
	cout << "YES\n" ;
}
