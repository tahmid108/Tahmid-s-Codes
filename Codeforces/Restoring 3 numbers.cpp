#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a[4];
	for(int i=0;i<4;i++)
	cin >> a[i];
	
	sort(a,a+4);
	
    long long x = (a[0]+a[1]-a[3]);
    long long y = (a[0]+a[2]-a[3]);
    long long z = (a[2]+a[1]-a[3]);
	
	cout << x << " " << y << " " << z << endl;
}
