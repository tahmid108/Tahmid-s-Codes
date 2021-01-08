#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int arr[n];
    int seq[n];
    seq[n-1]=0;
    bool pflag=false, nflag=false, flag=false;
    int  pcount=0, ncount=0;
    cin >> arr[0];
    for(int i=1; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i-1]< arr[i])
        {
            seq[i-1]=1;
            //pcount++;
            //ncount=0;
        }
        else if(arr[i-1]> arr[i])
        {
            seq[i-1] = -1;
            //ncount++;
            //pcount=0;
        }
        else
        {
            seq[i-1] = 0;
            //ncount=0;
            //pcount=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(seq[i] == 1)
        {
            pcount++;
            ncount=0;
        }
        else if(seq[i] == -1)
        {

            ncount++;
            pcount=0;
        }
        else
        {
            ncount=0;
            pcount=0;
        }
        if(pcount >= 5 || ncount >= 5)
        {
            flag=true;
        }
    }
    if(flag)
    {
        cout << -1;
    }
    else
    {
        int memory = -1;
        if(seq[0] == 0)
        {
        	cout <<"3 ";
        	memory=3;
		}
		else if(seq[0] == 1)
		{
			cout <<"1 ";
        	memory=1;
		}
		else
		{
			cout <<"5 ";
        	memory=5;
			
		}
        for(int i=1; i<n ; i++)
        {
        	if(seq[i] == 0)
        	{
        		if(seq[i-1] == 0)
        		{
        			if(memory == 3)
        			{
        				cout <<"2 ";
        	            memory=2;
					}
					else
					{
						cout <<"3 ";
        	            memory=3;
						
					}
				}
				else if(seq[i-1] == 1)
				{
					if(memory < 3)
        			{
        				cout <<"3 ";
        	            memory=3;
					}
					else
					{
						cout <<++memory<<" ";
						
					}
					
				}
				else if(seq[i-1] == -1)
				{
					if(memory > 2)
        			{
        				cout <<"2 ";
        	            memory=2;
					}
					else
					{
						cout <<--memory<<" ";
					}
					
				}
			}
			if(seq[i] == 1)
			{
				if(seq[i-1] == 0)
				{
					if(memory == 1)
					{
						cout<<"2 ";
						memory = 2; 
					}
					else
					{
						cout<<"1 ";
						memory = 1; 
					}
				}
				else if(seq[i-1] == 1)
				{
					cout<<++memory<<" "; 
				}
				else if(seq[i-1] == -1)
				{
					cout<<"1 ";
					memory = 1; 
				}
			}
            if(seq[i] == -1)
			{
				if(seq[i-1] == 0)
				{
					if(memory == 5)
					{
						cout<<"4 ";
						memory = 4; 
					}
					else
					{
						cout<<"5 ";
						memory = 5; 
					}
				}
				else if(seq[i-1] == 1)
				{
					cout<<"5 ";
					memory = 5; 
				}
				else if(seq[i-1] == -1)
				{
					cout<<--memory<<" "; 
					
				}
			}       
        }
    }
    return 0;
}








