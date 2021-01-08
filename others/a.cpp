#include <bits/stdc++.h>

using namespace std;
bool prime[100009]; 
vector<int> vc;
void seive(int n = 100000+9) 
{ 
     
    
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
       
        if (prime[p] == true) 
        { 
        
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    }
	vc.push_back(2);
	for(int i=3;i<100005;i+=2)if(prime[i]==1)vc.push_back(i); 

} 
int main()
{
	seive();
	int tc;
	cin >> tc;
	
	int k=1;
	while(k<=tc)
	{
		int n,q,n1,n2;
		int max_=-1111,min_=10000007;
		cin >> n >> q;
		while(q--)
		{
			int s;
			cin >> s;
			int ss = s;
			int ans=1;
			
			for(int i=0;vc[i]*vc[i]<=s;i++)
			{
				int count_ = 0;
			//	cout << vc[i] << endl;
				while(s%vc[i]==0)
				{
					s/=vc[i];
					count_++;
				}
				
				ans*=(count_+1);
				
				
			}
			if(s>1)ans*=2;
			//cout << ss << " " << max_ << ans << endl;
			ans-=2;
			if(max_<ans)
			{
				
				max_ = ans;
				n1 = ss;
				
			//	cout << n1 << endl;
			}
			if(min_>ans)
			{
				min_ = ans;
				n2 = ss;
			}
			
		}
		cout<<"Case "<<k<<": "<<n1<<" "<<n2<<endl;
		k++;
	}
}
