#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c;
	int n,l;
	cin >> n;
	deque <int > v;
	//int left=0;
	//int right=0;
	while(n--)
	{
		cin >> c >> l;
		int index;
		temp=l;
		if(c=='L')
		{
	       
	       
	    }
		else if(c=='R')
		{
	       v.push_back(l);
	    //   right++;
		}
		else if(c=='?')
		{
			if(index>=(v.size()/2))
			{
			     cout << v.size()-1-index << endl;	
			}
			else 
			{
				cout << index << endl;
			}	
		}
	}
	
}
