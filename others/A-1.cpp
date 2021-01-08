#include<bits/stdc++.h>
using namespace std;

float mat[3][6]={0};

int main()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		    cin >> mat[i][j];
	}
	
	mat[0][3]=1;
	mat[1][4]=1;
	mat[2][5]=1;
	
	if(mat[0][0]==0 && mat[1][0]!=0)
	{
	    for(int j=0;j<6;j++)
	    {
	    	double temp = mat[0][j];
	    	mat[0][j]=mat[1][j];
	    	mat[1][j]=temp;
		}
	}
	else if(mat[0][0]==0 && mat[2][0]!=0)
	{
	    for(int j=0;j<6;j++)
	    {
	    	double temp = mat[0][j];
	    	mat[0][j]=mat[2][j];
	    	mat[2][j]=temp;
		}
	}
	
	double dd = mat[0][0];
	for(int j=0;j<6;j++)
	mat[0][j]=mat[0][j]/dd;
	
	dd = mat[1][0];
	for(int j=0;j<6;j++)
	{
		mat[1][j]=mat[1][j]-mat[0][j]*dd;
	}
	
	dd = mat[2][0];
	for(int j=0;j<6;j++)
	{
		mat[2][j]=mat[2][j]-mat[0][j]*dd;
	}
	
    dd = mat[1][1];
	for(int j=0;j<6;j++)
	mat[1][j]=mat[1][j]/dd;
	
	dd = mat[2][1];
	for(int j=0;j<6;j++)
	{
		mat[2][j]=mat[2][j]-mat[1][j]*dd;
	}
	
	dd = mat[2][2];
	for(int j=0;j<6;j++)
	mat[2][j]=mat[2][j]/dd;
	
	dd=mat[0][2];
	for(int j=0;j<6;j++)
	{
		mat[0][j]=mat[0][j]-mat[2][j]*dd;
	}
	
	dd = mat[1][2];
	for(int j=0;j<6;j++)
	{
		mat[1][j]=mat[1][j]-mat[2][j]*dd;
	}
	
	dd = mat[0][1];
	for(int j=0;j<6;j++)
	{
		mat[0][j]=mat[0][j]-mat[1][j]*dd;
	}
	
	cout << "INVERSE MATRIX : \n";
	
	for(int i=0;i<3;i++)
	{
		for(int j=3;j<6;j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	
	
	
	
	
}
