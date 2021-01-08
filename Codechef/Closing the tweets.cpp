#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
    int count=0;
    cin >> n >> k;
    int x[n+4];
    for(int i=0;i<n;i++)
    {
    	x[i]=0;
	}
	while(k--)
	{
		string str;
		int l;
		cin >> str;
		if(str!="CLOSEALL")
		{
			cin >> l;
			if(x[l-1])
			{
				x[l-1]=0;
				count--;
			}
			else
			{
				x[l-1]=1;
				count++;
			}
		}
		else
		{
			for(int i=0;i<n;i++)
			x[i]=0;
			count=0;
		}
		cout << count << endl;
	}

}
	
