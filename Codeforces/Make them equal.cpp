#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n ;
	cin >> n;
	
	int a[n];
	
	map < int , bool > mp;
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		mp[a[i]]=1;
	}
	
	sort(a,a+n);
//	cout << mp.size() << endl;
    
    if(mp.size()>3)
	{
	    cout << -1 << endl;	
	} 
	else if(mp.size()==1)
	{
		cout << 0 << endl;
	}
	else if(mp.size()==2)
	{
		int x = (a[n-1]-a[0])/2;
		if(a[0]+x==a[n-1]-x)
		cout << x << endl;
		else
		cout << a[n-1]-a[0] << endl;
	}
	else if(mp.size()==3)
	{
		int x = (a[n-1]-a[0])/2;
		int count_ = 0;
		if(a[0]+x==a[n-1]-x)
		{
			int f = a[0]+x;
		    for(int i=0;i<n;i++)
			{
				if(a[i]!=a[0] && a[i]!=a[n-1])
				{
					if(a[i]!=f)
					{
						count_ = -1 ;
						break;
					}
				}
			}
			if(count_ == -1 )
			cout << -1 << endl;
			else
			cout << x << endl;	
		}
		else
		cout << -1 << endl;
	}
	return 0;
}
