#include<bits/stdc++.h>
using namespace std;

int main()
{
	int br,td;
	cin >> br >> td;
	long long tdrive[td+1]={0};
    long long riders[br+1];
	long long a[br+td+1];
	
	for(int i=0;i<(br+td);i++)
	{
		cin >> a[i];
	}
	
	bool x,temp;
	long long k=0,j=0,count=0,index=0;
	for(int i=0;i<(br+td);i++)
	{
		
		cin >> x;
		if(x==1)
		{
			if(count==0)
			{
				tdrive[count]=i;
			//	cout << tdrive[count] << endl;
				count++;
				index=i;
				
			}
			else
			{
				if(temp==0)
				{
				
			    int j=i-1;
			    while(abs(a[i]-a[j])<abs(a[index]-a[j]) && j>index)
			    {
			    	tdrive[count]++;
			    	j--;
				}
				tdrive[count-1]=tdrive[count-1]+(j-index);
				index=i;
				count++;
			    }
			    else
			    {
			    index=i;	
			    count++;
			    }
		
			}
		}
		else 
		{
			if(i==(br+td)-1)
			{
				tdrive[count-1]=tdrive[count-1]+i-index;
		//		cout << tdrive[count-1] << endl;
			}
		}
		temp=x;
		
    }
	
	for(int i=0;i<td;i++)
	{
		if(i==td-1)
		cout << tdrive[i] << endl;
		else
		cout << tdrive[i] << " ";
	}
	
}
