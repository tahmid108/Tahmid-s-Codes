#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	long long n;
	vector < pair <long long,long long> > v(1000002);
	long long x,y;
	while(tc--)
	{
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> v[i].first >> v[i].second;
		}
		cin >> x >> y;
		bool flag=0;
		bool ischeck=1;
		int counter=0;
	    int k=1;
	    
	     for(int i=0;i<n;i++)
	    {
	    	//cout << v[i].first-1 << " "<<v[i].second-2 << " " << x << " " << y << endl;
	    	if(!((v[i].first+2==x && v[i].second+1==y) || (v[i].first-2==x && v[i].second+1==y) || (v[i].first+2==x && v[i].second-1==y) || (v[i].first-2==x && v[i].second-1==y) || (v[i].first+1==x && v[i].second+2==y) || (v[i].first+1==x && v[i].second-2==y) || (v[i].first-1==x && v[i].second-2==y) || (v[i].first-1==x && v[i].second+2==y)))
	    	{
	    		counter++;
			}
		
		}
	//	cout << counter << endl;
		if(counter==n)
		{
			ischeck=0;
		}
	//	cout << ischeck << endl;
	    counter=0;
	    if(ischeck)
	    {
	    for(int i=0;i<n;i++)
	    {
	    	if(!((v[i].first+2==x+1 && v[i].second+1==y) || (v[i].first-2==x+1 && v[i].second+1==y) || (v[i].first+2==x+1 && v[i].second-1==y) || (v[i].first-2==x+1 && v[i].second-1==y) || (v[i].first+1==x+1 && v[i].second+2==y) || (v[i].first+1==x+1 && v[i].second-2==y) || (v[i].first-1==x+1 && v[i].second-2==y) || (v[i].first-1==x+1 && v[i].second+2==y)))
	    	{
	    		counter++;
			}
		
		}
	    }
		if(counter==n)
			{
				flag=1;
			}
		counter=0;
		if(flag==0 && ischeck)
		{
		 for(int i=0;i<n;i++)
	    {
	    	if(((v[i].first+2==x-1 && v[i].second+1==y) || (v[i].first-2==x-1 && v[i].second+1==y) || (v[i].first+2==x-1 && v[i].second-1==y) || (v[i].first-2==x-1 && v[i].second-1==y) || (v[i].first+1==x-1 && v[i].second+2==y) || (v[i].first+1==x-1 && v[i].second-2==y) || (v[i].first-1==x-1 && v[i].second-2==y) || (v[i].first-1==x-1 && v[i].second+2==y)))
	    	{
	    		counter++;
			}
			
		}
	    }
			if(counter==n)
			{
				flag=1;
			}
		counter=0;
		if(flag==0 && ischeck){
		
		 for(int i=0;i<n;i++)
	    {
	    	if(((v[i].first+2==x-1 && v[i].second+1==y-1) || (v[i].first-2==x-1 && v[i].second+1==y-1) || (v[i].first+2==x-1 && v[i].second-1==y-1) || (v[i].first-2==x-1 && v[i].second-1==y-1) || (v[i].first+1==x-1 && v[i].second+2==y-1) || (v[i].first+1==x-1 && v[i].second-2==y-1) || (v[i].first-1==x-1 && v[i].second-2==y-1) || (v[i].first-1==x-1 && v[i].second+2==y-1)))
	    	{
	    		counter++;
			}
		
		
		}}
			if(counter==n)
			{
				flag=1;
			}
			
	counter=0;
	if(flag==0 && ischeck){
	
		 for(int i=0;i<n;i++)
	    {
	    	if(((v[i].first+2==x-1 && v[i].second+1==y+1) || (v[i].first-2==x-1 && v[i].second+1==y+1) || (v[i].first+2==x-1 && v[i].second-1==y+1) || (v[i].first-2==x-1 && v[i].second-1==y+1) || (v[i].first+1==x-1 && v[i].second+2==y+1) || (v[i].first+1==x-1 && v[i].second-2==y+1) || (v[i].first-1==x-1 && v[i].second-2==y+1) || (v[i].first-1==x-1 && v[i].second+2==y+1)))
	    	{
	    		counter++;
			}
		}
	}
			if(counter==n)
			{
				flag=1;
			}
	counter=0;
		if(flag==0 && ischeck){
		 for(int i=0;i<n;i++)
	    {
	    	if(((v[i].first+2==x+1 && v[i].second+1==y+1) || (v[i].first-2==x+1 && v[i].second+1==y+1) || (v[i].first+2==x+1 && v[i].second-1==y+1) || (v[i].first-2==x+1 && v[i].second-1==y+1) || (v[i].first+1==x+1 && v[i].second+2==y+1) || (v[i].first+1==x+1 && v[i].second-2==y+1) || (v[i].first-1==x+1 && v[i].second-2==y+1) || (v[i].first-1==x+1 && v[i].second+2==y+1)))
	    	{
	    		counter++;
			}
		}
	}
			if(counter==n)
			{
				flag=1;
			}	
   counter=0;
		if(flag==0 && ischeck){
		
		 for(int i=0;i<n;i++)
	    {
	    	if(((v[i].first+2==x+1 && v[i].second+1==y-1) || (v[i].first-2==x+1 && v[i].second+1==y-1) || (v[i].first+2==x+1 && v[i].second-1==y-1) || (v[i].first-2==x+1 && v[i].second-1==y-1) || (v[i].first+1==x+1 && v[i].second+2==y-1) || (v[i].first+1==x+1 && v[i].second-2==y-1) || (v[i].first-1==x+1 && v[i].second-2==y-1) || (v[i].first-1==x+1 && v[i].second+2==y-1)))
	    	{
	    		counter++;
			}
			//if(counter==n)
			//{
			//	flag=1;
			//}
		}}
			if(counter==n)
			{
				flag=1;
			}
	counter=0;
		if(flag==0 && ischeck){
		
		 for(int i=0;i<n;i++)
	    {
	    	if(((v[i].first+2==x-1 && v[i].second+1==y) || (v[i].first-2==x-1 && v[i].second+1==y) || (v[i].first+2==x-1 && v[i].second-1==y) || (v[i].first-2==x-1 && v[i].second-1==y) || (v[i].first+1==x-1 && v[i].second+2==y) || (v[i].first+1==x-1 && v[i].second-2==y) || (v[i].first-1==x-1 && v[i].second-2==y) || (v[i].first-1==x-1 && v[i].second+2==y)))
	    	{
	    		counter++;
			}
			//if(counter==n)
			//{
			//	flag=1;
			//}
		}}
			if(counter==n)
			{
				flag=1;
			}
		counter=0;
		if(flag==0 && ischeck){
		
		 for(int i=0;i<n;i++)
	    {
	    	if(((v[i].first+2==x && v[i].second+1==y+1) || (v[i].first-2==x && v[i].second+1==y+1) || (v[i].first+2==x && v[i].second-1==y+1) || (v[i].first-2==x && v[i].second-1==y+1) || (v[i].first+1==x && v[i].second+2==y+1) || (v[i].first+1==x && v[i].second-2==y+1) || (v[i].first-1==x && v[i].second-2==y+1) || (v[i].first-1==x && v[i].second+2==y+1)))
	    	{
	    		counter++;
			}
			//if(counter==n)
			//{
			//	flag=1;
			//}
		}
	}
			if(counter==n)
			{
				flag=1;
			}
			counter=0;
		if(flag==0 && ischeck){
		
		 for(int i=0;i<n;i++)
	    {
	    	if(((v[i].first+2==x && v[i].second+1==y-1) || (v[i].first-2==x && v[i].second+1==y-1) || (v[i].first+2==x && v[i].second-1==y-1) || (v[i].first-2==x && v[i].second-1==y-1) || (v[i].first+1==x && v[i].second+2==y-1) || (v[i].first+1==x && v[i].second-2==y-1) || (v[i].first-1==x && v[i].second-2==y-1) || (v[i].first-1==x && v[i].second+2==y-1)))
	    	{
	    		counter++;
			}
			//if(counter==n)
			//{
			//	flag=1;
			//}
		}
	}
			if(counter==n)
			{
				flag=1;
			}
				if(flag==0 && ischeck)
	{
		cout << "YES\n";
		}	
	else
	cout <<"NO\n";
		}
	
}
