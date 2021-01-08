#include<iostream>
using namespace std;

int main()
{
	int val,blank;
	int a[]={7,2,4,1,5,3};
	for(int i=1;i<6;i++)
	{
		val=a[i];
		blank=i;
		while(blank>0 && a[blank-1]>val)
		{
		
		//	cout << endl;
			a[blank]=a[blank-1];
			blank--;
			
				for(int k=0;k<6;k++)
			{
				cout << a[k] << " " ;
			}
			cout << endl;
		}
		a[blank]=val;
	}
		for(int k=0;k<6;k++)
			{
				cout << a[k] << " " ;
			}
			cout << endl;
}
