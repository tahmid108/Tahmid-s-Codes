#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n,a,b ;
		cin >> n >> a >> b;
	   	int mn=1000000;int k;int p;
		for(int i=1;i<=n;i++)
		{
			if(i!=a&&i!=b)
			{
				k=abs(i-a)+abs(i-b);
				if(k<mn)
				{
					mn=k;
					p=i;
				}
			}
		}  
		cout<<p<<" "<<mn<<endl;
	}
}
