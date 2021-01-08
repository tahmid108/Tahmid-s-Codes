#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,z,tc;
	cin >> tc;
	while(tc--)
	{
	cin >> x >> y >> z;
	//int tc;
	if(x>=y && x>=z)
	{
		//max=x;
		if(y+z-x==0)
		{
			cout << "YES\n";
			//continue;
		}
		else
		cout << "NO\n";
	}
	else if(y>=x && y>=z)
	{
		//max=x;
		if(-y+z+x==0)
		{
			cout << "YES\n";
			//continue;
		}
		else
		cout << "NO\n";
	}
	else if(z>=x && z>=y)
	{
		//max=x;
		if(y-z+x==0)
		{
			cout << "YES\n";
			//continue;
		}
		else
		cout << "NO\n";
	}
	}
}
