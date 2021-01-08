#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		double d;
		cin >> d;
		double DD = d*d - 4*d;
		if(DD < 0 ) cout << "N\n";
		else
		{
			double f = sqrtl(DD);
			cout << "Y\n";
			cout << fixed << setprecision(9);
			cout << (d+f)/2.0 << " " << (d-f)/2.0 << endl;
		}
	}
}
