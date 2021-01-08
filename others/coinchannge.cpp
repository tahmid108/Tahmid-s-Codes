#include<bits/stdc++.h>
using namespace std;

int subset(int a[],int i,int to_make,int len)
{
	int ans1,ans2;
	cout <<endl<< "i:"<<" "<<i<<" "<<"a[i]"<<" "<<a[i]<<" "<<"to_make:"<<" "<<to_make<<endl;
	if(i>len && to_make<0)
	{
		cout << "Length par hoyeo Choto"<<endl;
		return 0;
	}
	
	if(i>len && to_make>0)
	{
		cout << "Length par hoyeo Boro"<<endl;
		return 0;
	}
	if(i>len && to_make==0)
	{
		cout << "Milse"<<endl;
		return 1;
	}
	
	
	
	ans1=subset(a,i+1,to_make,len);
	
	if(to_make>=a[i])
	ans2=subset(a,i,to_make-a[i],len)+1;
	
	cout << "ANSWER:"<<ans1+ans2 << endl;
	return ans1+ans2;
}

int main()
{
	int n,to_make;
	cin >> n >> to_make;
	int a[n];
	for(int i=0;i<n;i++)
	 cin >> a[i];
	
    int ways=subset(a,0,to_make,n-1); 
    
    cout << ways << endl;
}
