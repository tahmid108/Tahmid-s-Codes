#include<bits/stdc++.h>
using namespace std;



int main()
{
	long long a[26];
	long long b[26];
	a[0]=1;
	a[1]=1;
	a[2]=1;
	for(int i=3;i<=25;i++)
	{
		a[i]=a[i-2]*2+a[i-1];
	}
	b[0]=1;
	for(int i=1;i<=25;i++)
	{
		b[i]=powl(2,i);
	}
	int tc;
	cin >> tc;
	int k=1;
	while(k<=tc)
	{
		int n;
		cin >> n;
		if(k==tc)
		{
			cout << a[n] << " " << b[n] << endl;
		}
		else
		cout << a[n] << " " << b[n] << " ";
		k++;
	}
}
