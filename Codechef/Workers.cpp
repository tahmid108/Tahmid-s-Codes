#include<bits/stdc++.h>
using namespace std;

class Workers{
	public:
		int index;
		int coins;
};

int main()
{
	int w;
	scanf("%d",&w);
	Workers a[w];
	for(int i=1;i<=w;i++)
	{
		scanf("%d",&a[i].coins);
	}
	for(int i=1;i<=w;i++)
	{
		scanf("%d",&a[i].index);
	}
	for(int i=1;i<=w-1;i++)
	{
		int ptr=1;
		while(ptr<=w-i)
		{
			if(a[ptr].coins>a[ptr+1].coins)
			swap(a[ptr],a[ptr+1]);
			else 
			ptr++;
		}
	}
	if(a[1].index==3)
	{
		cout << a[1].coins << endl;
	}
     else if(a[1].index==1)
     {
     	int ans=a[1].coins;
     	int j=2;
     	while(j<=w)
     	{
     		if(a[j].index==2 || a[j].index==3)
     	    {
     	       ans=ans+a[j].coins;
				cout << ans << endl;
				break;	
			}
			j++;
		 }
	 }
	else if(a[1].index==2)
	{
		int ans=a[1].coins;
     	int j=2;
     	while(j<=w)
     	{
     		if(a[j].index==1 || a[j].index==3)
     	    {
     	       ans=ans+a[j].coins;
				cout << ans << endl;
				break;	
			}
			j++;
		 }
	   	
	} 
}
