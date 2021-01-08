#include<bits/stdc++.h>
using namespace std;

long long phi(long long n)
{
	long long result = n;
	
	for(long long p=2;p*p<=n;p++)
	{
		if(n%p==0)
		{
			while(n%p==0)
			{
				n/=p;
				
			}
			result-=result/p;
		}
		
	}
	
	if(n>1)
	result-=result/n;
	
	return result;
}

int main()
{
	long long n;
	while(cin >> n , n!=0)
	{
		cout << phi(n) << endl;
	}
}
