#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  max 1000000009

int main()
{
     int tc;
     cin >> tc;
     while(tc--)
     {
     	ll n;
     	cin >> n;
     	ll a[n+1];
     	for(int i=0;i<n;i++)
     	{
     		cin >> a[i];
		}
		int count=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				count++;
			}
		}
		cout << count << endl;
	 }
}
