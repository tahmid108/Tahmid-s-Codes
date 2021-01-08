#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,count=0,count1=0;
	cin >> n;
	int a[n];
	vector<int> x;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		if(i==n-1){
		x.push_back(a[i]);
        //cout<<"LAST"<<endl;
	}
			else{
				count=0;
				count1=0;
		for(int j=i+1;j<n;j++)
		{
		//	cout<<a[i]<<" "<<a[j]<<endl;
			if(a[j]!=a[i])
			count++;
			
			count1++;
		}
	//	cout<<count<<" "<<count1<<endl;
		if(count1==count)
		x.push_back(a[i]);
		
		//cout<<x[0]<<endl;
	}
	}
	cout<<x.size()<<endl;
	for(int i=x.size()-1;i>=0;i--)
		{
			if(i==0)
			{
				cout<<x[i]<<endl;
				break;
			}
			cout<<x[i]<<" ";
		}
		
}
	
