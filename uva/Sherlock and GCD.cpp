#include<bits/stdc++.h>
using namespace std;

int calc(int a,int b)
{
	if(a==0)
	return b;
	
	return calc(b%a,a);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n ;
	    cin >> n ;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin >> a[i];
	    
	    int res = a[0];
	    for(int i=1;i<n;i++)
	    res = calc(res,a[i]);
	    
	    if(res>1)
	    cout << "NO\n";
	    else
	    cout << "YES\n";
    }
}
