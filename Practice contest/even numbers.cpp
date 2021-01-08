#include<bits/stdc++.h>
using namespace std;

long long brev(long long n)
{
	long long rev=0;
	while(n>0)
	{
		rev<<=1;
		
		if(n&1==1)
		rev^=1;
		
		n>>=1;
	}
	return rev;
}

int main()
{
	 long long n;
	 cin >> n;
	 long long a[n+1];
	 for(int i=0;i<n;i++)
	 {
	 	cin >> a[i];
	 	if(a[i]%2==0)
	 	{
	 		a[i]=brev(a[i]);
		}
	 }
	 for(int i=0;i<n;i++)
	 {
	 	cout << a[i] << endl;
	 }
	 
}
