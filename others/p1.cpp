#include<bits/stdc++.h>
using namespace std;

int a[1003];

int main()
{

	
	int k,n;
	cin >> k >> n;
	int max=-1;
	int min=11111111;
	int imax,imin,cmax=0,cmin=0;
	int index=1;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin >> temp;
		++a[temp];
		
		
	    
	}
	for(int i=1;i<=k;i++)
	{
		if(max<a[i]){
		
		  	max=a[i];
		  	//imax=temp;
		  }
		if(min>a[i]){
		
		    min=a[i];
			//cout <<"min changed \n";
		}
	}
	
	
	int c1=0,c2=0,c0=0,c3=0;
	for(int i=1;i<=k;i++)
	{
		//cout << a[i]<<" ";
		if(a[i]==max)cmax++;
		if(a[i]==min)cmin++;
		int dif = max-a[i];
		if(dif==1)c1++;
		else if(dif==0)c0++;
		else if(dif==2)c2++;
		else c3++;
	}
	//cout<<endl<<max<<" "<<min<<" "<<cmax<<" "<<cmin<<endl;
	if(c3 || (cmax>1 && cmin>1) || (c2 && cmax>1 ) || (c2 && cmin>1))
	{
	cout<<"*"<<endl;
	return 0;
	}
	
	if(!c2 && cmax==1)
	for(int i=1;i<=k;i++)
	{
		if(a[i]==max)
		{
			cout<<"-"<<i<<endl;
			return 0;
		}
		
	}
	
	if(!c2 && cmin==1)
	for(int i=1;i<=k;i++)
	{
		if(a[i]==min)
		{
			cout<<"+"<<i<<endl;
			return 0;
		}
		
	}
	int k1=-1,k2=-1;
	
	if(c2 && cmax==1)
	for(int i=1;i<=k;i++)
	{
		if(k1!=-1 && k2!=-1)break;
		if(a[i]==max)
		{
			k1=i;
		}
		if(a[i]==min)
		{
			k2=i;
		}
		
	}
	cout<<"-"<<k1<<" "<<"+"<<k2<<endl;
	

	
	
}
