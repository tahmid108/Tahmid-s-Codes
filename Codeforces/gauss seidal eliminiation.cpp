#include<bits/stdc++.h>
using namespace std;
double matrix[3][4];

void splitter(int j,string s)
{
	bool minus=0;
	int sum=0;
	int k=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='-' && i==0)
		    minus=1;
		if(s[i]=='=' && s[i+1]=='-')
		    minus=1;
		if(s[i]>=48 && s[i]<=57)
        {
            sum*=10;
            sum+=s[i]-48;
        }
		else if(s[i]=='+' || s[i]=='=')
		    continue;
		else if(s[i]=='-')
		{
			minus=1;
			continue;
		}
		else
		{
		if(sum==0)
            {
                if(i==0)sum=1;
                else
                {
                    if(s[i-1]=='+'||s[i-1]=='-')sum=1;
                }
            }
            if(minus)
            {
                sum*=-1;
                minus=0;
            }
            matrix[j][k]=sum;
            k++;
            sum=0;
        }
        if(i==s.size()-1)
        {
            if(minus)
            {
                sum*=-1;
                minus=0;
            }
            matrix[j][k]=sum;

        }
			
	    }		
			    
	}


int main()
{
	string s;
	for(int i=0;i<3;i++)
	{
	   getline(cin,s);
	   splitter(i,s);
    }
    for(int i=0;i<3;i++)
    {
    	for(int j=0;j<4;j++)
    	    cout << matrix[i][j] <<" ";
    	    
    	cout<<endl;    
	}
	double x=0,y=0,z=0;
	for(int i=0;i<4;i++)
	{
		x=(matrix[0][3]-matrix[0][1]*y-matrix[0][2]*z)/matrix[0][0];
		y=(matrix[1][3]-matrix[1][0]*x-matrix[1][2]*z)/matrix[1][1];
		z=(matrix[2][3]-matrix[2][0]*x-matrix[2][1]*y)/matrix[2][2];
	}
	
	cout<<endl<<"x="<<x;
	cout<<endl<<"y="<<y;
	cout<<endl<<"z="<<z;

	
}
