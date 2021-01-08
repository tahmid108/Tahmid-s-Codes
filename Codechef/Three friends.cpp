#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,z,tc;
	cin >> tc;
	while(tc--)
	{
       cin >> x >> y >> z;
       if(x+y==z)
       cout << "yes\n";
       else if(y+z==x)
       cout << "yes\n";
       else if(z+x==y)
       cout << "yes\n";
       else
       cout << "no\n";
	}
}
