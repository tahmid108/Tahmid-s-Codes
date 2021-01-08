#include<bits/stdc++.h>
using namespace std;

int main()
{
	double fact[1000006];
	fact[1]=log10(1.0);
	for(int i=2;i<=1000000;i++)
	fact[i]=fact[i-1] + log10((double)i);
	
	int t;
	cin >> t;
	while(t--)
	{
		int x;
		cin >> x;
		int hi=1000000,lo=1,n=-1;
		while(lo<=hi)
		{
			int mid=(lo+hi)/2;
			double f=fact[mid];
			double g= (double)mid*log10(double(x));
			if(f>g)
			{
				n=mid;
				hi=mid-1;
			}
			else
			lo=mid+1;
		}
		cout << n << endl;
	}
}
