#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll tc;
	cin >> tc;
	while(tc--)
	{
		ll n,a,b,x,y,z;
		cin >> n >> a >> b >> x >> y >> z;
		ll arr[n];
		ll sum = 0;
		for(int i=0;i<n;i++)
		{
		   cin >> arr[i];
		   sum+=arr[i];
	    }
		sort(arr,arr+n);
	//	ll brr[n];
		
	/*	for(int i=n-2;i>=0;i--)
		{
			arr[i]+=arr[i+1];
		}*/
		
		ll x2 = (z-a)/x;
		ll y2 = (z-b)/y;
		
		//cout << x2 << " " << y2 << endl;
		if(x2<y2)
		cout << 0 << endl;
		else if(x2==y2)
		{
			ll x3 = (y2-1)*x;
			x3 = z-x3-a;
		//	cout << x3 << endl;
		    if(x3>2*sum-1)
			cout << "RIP\n";
			else
			{
				int cnt = 0;
				int k = n-1;
				//cout << "IMPLEMENTATION BAKI\n";
				while(x3>0)
				{
					x3-=arr[k];
					arr[k]=arr[k]/2;
					k--;
					cnt++;
					if(k==-1)
					k = n-1;
				}
				cout << cnt << endl;
			}
		}
		else{
			ll x3 = y2*x;
			x3 = z-x3-a;
		//	cout << x3 << endl;
		    if(x3>2*sum-1)
			cout << "RIP\n";
			else
			{
				int cnt = 0;
				int k = n-1;
				//cout << "IMPLEMENTATION BAKI\n";
				while(x3>0)
				{
					x3-=arr[k];
					arr[k]=arr[k]/2;
					k--;
					cnt++;
					if(k==-1)
					k = n-1;
				}
				cout << cnt << endl;
			}	
		}
	}
}
