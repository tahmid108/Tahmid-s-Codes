#include<bits/stdc++.h>
using namespace std;

int primes[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
int lucky[1001];

int factor(int n)
{
	int counter=0;
	int x=n;
	for(int i=0;primes[i]<=sqrt(x);i++)
	{
		if(n%primes[i]==0)
		{
			counter++;
			while(n%primes[i]==0)
			{
				n=n/primes[i];
			}
		}
	}
	if(n>1)
	counter++;
	
	return counter;
}

int main()
{
	int k=1;
	for(int i=30;i<2665;i++)
	{
		if(factor(i)>=3)
		{
			lucky[k++]=i;
		}
	}
	int tc;
	cin >> tc;
	int n;
	while(tc--)
	{
		cin >> n;
		cout << lucky[n] << endl;
	}
}
