#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
	int tc;
	
	cin >> tc;
	
	while(tc--)
	{
		cin >> n;
		int a[n];
		int sum = 0;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			sum+= a[i];
		}
		
	//	int ans = ceil(sum / n);
		int ans = sum/n;
		
		if(ans*n>=sum)
		cout << ans << endl;
		else
		cout << ans+1 << endl;
	}
		
}
