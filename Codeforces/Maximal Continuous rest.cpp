#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	int a[n];

    int firstn=0,lastn=0,maxn=0,cntn=0,index1=0,index2=n-1;
			
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	for(int i=0;a[i]!=0;i++)
	{
		firstn++;
		index1=i;
	}
	
	for(int i=n-1;a[i]!=0;i--)
	{
		lastn++;
		index2=i;
	}
	
	// cout << index1 << " " << index2 << endl;
	for(int i=index1+1;i<index2;i++)
	{
		if(a[i]==1)
		{
			cntn++;
	//		cout << "1 pacche \n";
		}
		else
		{
	//		cout << "0 paise now checking \n";
		    if(cntn>maxn)
		    {
		    	maxn=cntn;
		    	cntn=0;
			}
			else
			cntn=0;
			
	//		cout << maxn << endl;
		}
	}
	
	if(cntn>maxn)
	{
		    maxn=cntn;
		    cntn=0;
	}

	firstn+=lastn;
	
	if(maxn<firstn)
	{
		cout << firstn << endl;
		
	}
	else
	cout << maxn << endl;
	
}
