#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector < double > v;
	int tc,n;
	cin >> tc;
	while(tc--)
	{
	   cin >> n;
	   long long count=0;
	   
	   /*for(int i=1;i<(n+1);i++)
	   {
	   	   double x=n+1;
	   	   double s=i;
	   	   double ans = x/s;
	   	   cout << n+1 << "/" << i << " = " << ans << " " ;
	   	   int ans1 = ans;
	   	   if(ans-ans1 >= 0.5)
	   	   ans1 = ceil(ans);
	   	   cout << ans1 << endl;
	   	   
	   	   count = count+ans1;
	   }
	   cout << count << endl;
       }
       else 
       {
       	  for(int i=1;i<=n;i++)
	   {
	   	   double x=n;
	   	   double s=i;
	   	   double ans = x/s;
	   	   cout << n << "/" << i << " = " << ans << " " ;
	   	   int ans1 = ans;
	   	   if(ans-ans1 >= 0.5)
	   	   ans1 = ceil(ans);
	   	   cout << ans1 << endl;
	   	   
	   	   count = count+ans1;
	   }
	      cout << count << endl;
	   }*/
	   for(int i=0;i<=n;i++)
	   {
	   	   double t=i;
	   	   double s=n;
	   	  double x = 100*(t/s);
	   	  v.push_back(x);
	   	  //cout << v[i] << endl;
	   }
	   for(int i=1;i<=n;i++)
	   {
	   	   for(int j=1;j<=n;j++)
	   	   {
	   	   	   double t=j;
	   	   	   double s=n;
	   	   	   double x = v[i]*(t/s);
	   	   	   //cout << x << endl;
	   	   	   v.push_back(x);
	   	   }
	   }
	   sort(v.begin(),v.end());
	   v.erase(unique(v.begin(),v.end()),v.end());
       v.erase(unique(v.begin(),v.end()),v.end());	   	
	   cout << v.size() << endl;
	   for(int i=0;i<v.size();i++)
	   cout << v[i] << endl;
	   v.clear();	
	}
	
}
   
