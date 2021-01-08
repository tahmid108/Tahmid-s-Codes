#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long count=1;
	if(n==1)
	{
		cout << 1 << endl;
		return 0;
	}
	if(n==2)
	{
		cout << 2 << endl;
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			count++;
			if((n/i)!=i)
			count++;
        }
		
	}
	
	cout << ++count << endl;
}
