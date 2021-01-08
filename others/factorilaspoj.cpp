#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long countfives(long long n)
{
	long long count=0;
	for(long long i=5;n/i>=1;i*=5)
	count+= n/i;
	
	return count;
}

int main()
{
	ll tc,n;
	cin >> tc;
	while(tc--)
	{
		cin >> n;
		cout << countfives(n) << endl;
	}
}
