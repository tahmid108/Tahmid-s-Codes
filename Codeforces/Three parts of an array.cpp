#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	
	cin >> n;
	
	long long a[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	int i = 0;
	int j = n-1;
	
	long long max = 0;
	
	long long sum1 = a[0];
	long long sum2 = a[n-1];
	
	while(i<j)
	{
        if(sum1==sum2)
        {
        	max = sum1;
        	i++;
        	j--;
        	if(i<j)
        	{
        	   sum1+=a[i];
        	   sum2+=a[j];
            }
		}
		else if(sum1>sum2)
		{
			j--;
			if(i<j)
			{
				sum2+=a[j];
			}
		}
		else if(sum1<sum2)
		{
			i++;
			if(i<j)
			{
				sum1+=a[i];
			}
		}
	}
	
	cout << max << endl;
}
