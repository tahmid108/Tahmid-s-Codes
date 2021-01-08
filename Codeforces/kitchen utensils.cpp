#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin >>  n >> k;
	int arr[n+2];
	
	 map < int , int > mp;
	 map<int ,bool>mp2;
	 int count2=0;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		mp[arr[i]]++;
		if(mp2[arr[i]]!=true)
		{
			mp2[arr[i]]=true;
			count2++;
		}
		
	}
	int max=0;
	 map < int , int > :: iterator it = mp.begin();
	 
	for(;it!=mp.end();it++)
	{
	    if((it->second)>max)
		max=(it->second);	
    }
    
  //  cout << max << endl;
     
     double count= (double)max / (double)k;
      
     int ct = ceil(count);
     
    // cout << k << " " << ct << " " << count2 << endl;
    
    int ans = (k*ct*count2)-n;
    
    cout << ans << endl;
    
	
    
}
