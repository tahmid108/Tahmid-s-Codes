#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

long long findGCD(long long arr[], int n) 
{ 
    long long result;
    for (int i = 1; i <= n; i++)
	{
	    if(arr[i])
        result = arr[i];
		break; 
    }
    //cout << result << endl;
    for (int i = 1; i <= n; i++)
	{
	    if(arr[i])
        result = gcd(arr[i], result); 
    }
    
    return result; 
} 

int main()
{
	int n;
	scanf("%d",&n);
	long long a[n+1];
	
	long long mx = 0;
	
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		if(a[i]>mx)
		mx = a[i];
	}
	
	long long stolen=0;
	long long st[n+1];
	for(int i=1;i<=n;i++)
	{
		stolen+=(mx-a[i]);
		st[i] = mx-a[i];
	}
	
	long long z = findGCD(st,n);
	
	long long y = (stolen/z);
	
	cout << y << " " << z << endl;
	
}
