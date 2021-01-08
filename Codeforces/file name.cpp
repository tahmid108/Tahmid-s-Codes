#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin >> n;
     char a[n+1];
     for(int i=0;i<n;i++)
     cin >> a[i];
     int count=0;
     for(int i=0;i<n-2;i++)
	{
		if(a[i]=='x')
		{
			if(a[i+1]=='x' && a[i+2]=='x')
			count++;
		}
	}
	cout << count << endl;
}
