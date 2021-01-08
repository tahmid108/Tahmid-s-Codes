#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int x = (a+b);
	int y = (b+c);
	int z = (c+a);
	int k = (a+d);
	int f = (b+d);
	int g = (c+d);
	int ff = (b+c+d);
	int jj = (a+c+d);
	int kk = (a+b+d);
	int ll =(a+b+c);
	
	
	if(x==g || z==f || y==k || ff==a || jj==b || kk==c || ll==d)
	cout << "YES\n";
	else
	cout << "NO\n";
}
