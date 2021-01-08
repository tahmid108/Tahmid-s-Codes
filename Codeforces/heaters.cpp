#include<bits/stdc++.h>
using namespace std;

int main()
{
	bool a[1001];
	int b[1001]={0};
	int n,r;
	cin >> n >> r;
	int count1;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]==1)
		count1++;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			b[i]=1;
			for(int j=1;j<r;j++)
			{
				if(i+j<n)
				b[i+j]=1;
				if(i-j>=0)
				b[i-j]=1;
			}
		}
	}
	bool flag1=0,flag2=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		//cout << b[i] << " ";
		if(b[i]==0)
		{
			count=-1;
			break;
		}
	}
	//cout << count1 << endl;
	if(count==-1)
	{
		cout << -1 << endl;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			flag1=0;
			flag2=0;
			if(a[i]==0)
			{
				int temp1=0,temp2=0;
				for(int j=1;j<r;j++)
			    {
			    	if(i-j>=0)
			    	{
			    	    if(a[i-j]==1)
			    	    {
			    	    	flag1=1;
			    	    	temp1++;
						}
					}
					if(i+j<n)
					{
						if(a[i+j]==1)
						{
							flag2=1;
							temp2++;
						}
					}
					if((temp1>1 && flag1==1 && flag2==1 && temp2>=1) || (temp2>1 && flag1==1 && flag2==1 && temp1>=1))
					{
						count1--;
						break;
				     }
				
			    }
			}
			
		}
		cout << count1 << endl;
	}
}
