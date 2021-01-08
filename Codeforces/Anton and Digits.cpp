#include<bits/stdc++.h>
using namespace std;

long long min(long long x,long long y)
{
	if(x>y)
	return y;
	return x;
}
int main()
{
	long long d2,d3,d5,d6,ans;
	cin >> d2 >> d3 >> d5 >> d6 ;
	long long dig = min(d2,min(d5,d6));
	//cout << dig << endl;
	ans = 256 * dig;
	if(dig==d2)
	{
		cout << ans << endl;
		return 0;
	}
	else 
	{
		d2=d2-dig;
		dig = min(d2,d3);
		ans = ans+(32*dig);
		cout << ans << endl;
	}
	
}
