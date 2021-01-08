#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,x,y;
	cin >> n >> x >> y;
	double a1= sqrt(abs((double)x-1)*abs((double)x-1)+abs((double)y-1)*abs((double)y-1));
	double a2= sqrt(abs((double)x-n)*abs((double)x-n)+abs((double)y-n)*abs((double)y-n));
	if(a1<=a2)
	{
		cout << "White\n";
	}
	else
	cout << "Black\n";
}
