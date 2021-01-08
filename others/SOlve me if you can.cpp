#include <bits/stdc++.h>

using namespace std;


bool prime[100009]; 
void SieveOfEratosthenes(int n = 100000+9) 
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

} 
int main()
{
	SieveOfEratosthenes(); 
	prime[1]=false;
	prime[0]=false;
	int t;
	cin >> t;
    while(t--)
    {
    	int a,b;
    	cin >> a >> b;
		int i;
    	for(i = b; i>=a; i--)
    	{
    		if(prime[i])
    		{
    			cout << i << endl;
				break; 
			}
		}
		if(i<a)
		{
			cout << -1 << endl;
		}
		
    	
	}




return 0;
}
