#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	
	int x [n][m];
	
	map < int , bool > mp;
	
	int flag = 0,index1,index2,info,info2,flag2=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> x[i][j];
			mp[x[i][j]]=true;
		//	cout << mp.size() << " " << info <<" " << i <<  " " << flag2 << " " <<  endl;
			if(mp.size()==1 && flag2==0)
			{
				info = i;
				info2 = j;
				flag2 = -1;
			}
			//cout << mp.size() << endl;
			else if(mp.size()>1 && i==info && flag2==-1)
			{
				//cout << "EKHANE TO DHUKAR KOTHA\n";
				if(i<n-1)
				{
					if(x[info][info2]!=x[i+1][0])
					{
		//				cout << "INFO DOESNT MATCH FOR " << x[i][j] << endl;
						index1 = info;
						index2 = info2;
						flag = -1;
					}
					else
					{
						index1 = i;
						index2 = j;
						flag = -1;
					}
				}
				else if(i>0)
				{
					if(x[info][info2]!=x[i-1][0])
					{
						index1 = info;
						index2 = info2;
						flag = -1;
					}
					else
					{
						index1 = i;
						index2 = j;
						flag = -1;
					}
					
				}
			}
			else if(mp.size()>1 && flag==0 && i!=info)
			{
				//cout << "DHUKSE " << i << " " << j << endl;
				index1 = i;
				index2 = j;
				flag=-1;
			}
		}
	}
	
	if(mp.size()==1)
	{
		cout << "NIE\n";
	}
	else
	{
        cout << "TAK\n";
        for(int i=0;i<n;i++)
        {
        	if(i!=n-1)
        	{
			    if(i==index1)
        	    cout << index2+1 << " ";
        	    else
        	    cout << 1 << " ";
            }
            else
            {
            	if(i==index1)
        	    cout << index2+1 << endl;
        	    else
        	    cout << 1 << endl;
			}
        }
    }
}
