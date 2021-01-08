#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,a,b;
	cin >> n;
	cin >> a;
	for(int i=0;i<n-1;i++)
	{
		cin >> b;
		b = a^b;
		a=b;
	}
	cout << a << endl;
}
