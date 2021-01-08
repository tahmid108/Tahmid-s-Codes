#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long sum1=0,sum2=0;
	for(int i=0;i<=32;i++)
	{
		if(i%2==0)
		sum1+=pow(2,i);
		else
		sum2+=pow(2,i);
	}
	int n;
	while(cin >> n)
	{
		//cout << sum1 << sum2 << endl;
		if(n==0)
		break;
		else
		{
			long long a = n&sum1;
			long long b = n&sum2;
			cout << a << " " << b << endl;
		}
	}
}
