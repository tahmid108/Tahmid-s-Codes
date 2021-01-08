#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	long long a[n];
	
	int odds = 0;
	int evens = 0;
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		
		if(a[i]%2==0)
		evens++;
		else
		odds++;
	}
	
	sort(a,a+n);
	int sum=0;
	
	if (evens>odds)
	{
		int x = evens-odds;
		
		int i=0,j=0;
		while(i<x-1)
		{
			if(a[j]%2==0)
			{
			   sum+=a[j];
			   i++;
		    }
		    j++;
		}
	}
	else
	{
		int x = odds-evens;
		
		int i=0,j=0;
		while(i<x-1)
		{
			if(a[j]%2!=0)
			{
			   sum+=a[j];
			   i++;
		    }
		    j++;
		}
	}
	
	cout << sum << endl;
	
}
