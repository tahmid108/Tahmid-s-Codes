#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[]={0,1,2,3,0,9,3,6,1,6,3,0,8,6,5,2,6,4,9,6,3,3,5,9,1,7,5,8,8,8};
	//cout << sizeof(a);
	long long q,n;
	cin >> q;
	while(q--)
	{
		cin >> n;
		long long x = (log2(n));
		//cout << x;
		cout << a[x] << endl;
	}
}
