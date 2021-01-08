#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	//ios_base::sync_with_stdio(false);
    int n,k;
	//int tc;
    scanf("%d %d",&n,&k);
	
	int a[n];
	
	vector <int> ans;
	
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	map <int,bool> mp;
	
	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		if(mp[a[i]]==0 && cnt<k){
		   ans.push_back(a[i]);
		   mp[a[i]]=1;
		   cnt++;
        }
        else if(mp[a[i]]==0)
        {
           int ff = ans.front();
        	//mp[a[i]]=1;
           mp[ff] = 0;
          // ans.pop_front();
           ans.erase(ans.begin());
           ans.push_back(a[i]);
		   mp[a[i]]=1;	
		}
        
       /* for(int i=ans.size()-1;i>=0;i--)
	    {
		if(i==0)
		cout << ans[i] <<endl;
		else
		cout << ans[i] << " " ;
		
	    }*/
			
	}	
	printf("%d\n",ans.size());
	for(int i=ans.size()-1;i>=0;i--)
	    {
		if(i==0)
		printf("%d\n",ans[i]);
		else
		printf("%d ",ans[i]);
		
	    }
}
