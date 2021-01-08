#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	long long len,v,l,r;
	cin >> t;
	while(t--)
	{
		long long answ1,answ2;
		cin >> len >> v >> l >> r;
		answ1 = len/v-(r/v-(l-1)/v);
		//long long count=0;
		
		
		
		 
		//answ1=answ1-count;
		
		cout << answ1 <<endl;
	    
	}
}
