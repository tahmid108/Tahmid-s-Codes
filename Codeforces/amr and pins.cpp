#include<bits/stdc++.h>
using namespace std;

int main()
{
	int r,x,y,x1,y1;
	cin >> r >> x >> y >> x1 >> y1;
	double d=sqrt((double)(x1-x)*(double)(x1-x)+(double)(y1-y)*(double)(y1-y));
	cout << (int) ( ceil)(d/r/2) << endl;
}
