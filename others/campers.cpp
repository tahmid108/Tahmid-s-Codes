#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n,k;
	cin >> n >> k;
	int a[k];
	bool count[n+2];
	for(int i=1;i<=n;i++)
	count[i]=true;
	for(int i=0;i<k;i++)
	{
		cin>>a[i];
		//cout << a[i] << " " << a[i]-1 << " " << a[i]+1 << endl;
		count[a[i]]=false;
		count[a[i]-1]=false;
		count[a[i]+1]=false;
    }
    for(int i=1;i<=n;i++)
    {
    	if(count[i])
    	{
    		count[i-1]=false;
    		count[i+1]=false;
		}
	}
	ll cnt=0;
    for(int i=1;i<=n;i++)
    {
    
    	if(count[i])
    	{
    	//	cout << "dhukse"<<endl;
    		cnt++;
		}
	}
	cout << cnt+k << endl;

}
