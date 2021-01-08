#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,temp1=0,temp2=0,ans=0,Maxi=0;
	cin >> n;
	int sum=0;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		sum = sum + a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
		if((sum-ans)%3==0)
		{
			temp1=sum-ans;
			Maxi=max(Maxi,temp1);
			break;
		}
		else
		ans=ans+a[i];
		for(int j=i+1;j<n;j++)
		{
			if((sum-ans)%3==0){
			
			temp2=sum-ans;
			Maxi=max(Maxi,temp2);
			break;
		   }
		   else 
		   ans=ans+a[j];
		}
		ans=0;
    }
    cout << Maxi << endl;
	
}
