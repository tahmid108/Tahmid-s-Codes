#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	
//	cout << s.size() << endl;
	
	double x = (double)s.size()/20.0;
	int row = ceil(x);
	
	int f= s.size();
	int count=0;
	while(f%row!=0)
	{
		f++;
		count++;
	}
	int col = f/row;
	
	cout << row << " " << col << endl;
	
	int ff = count/row;
	int ff2= count%row;
	
	int ff3 = row-ff2;
	
	int j=0,temp=0;
	bool flag=0;
	//if(ff==0)
	//{
		int xx=1;
		for(int i=0;i<row;i++)
		{
		    if(i>=ff3)
		    {
		    	//cout << "DHUKSE" ;
		    	if(flag==0)
		    	{
		    	cout << s.substr(j,col-1);
		    	cout << '*';
		        }
		        else
		        {
		           cout << s.substr(j-xx,col-1);
		           cout << '*';
		           xx++;
				}
				flag=1;
			}
			else
			{
				cout << s.substr(j,col);
			}
			cout << endl;
				j+=col;
		}

}
