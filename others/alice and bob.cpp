#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[3];
	int b[3];
	for(int i=0;i<3;i++)
	cin >> a[i];
	for(int i=0;i<3;i++)
	cin >> b[i];
	int al=0,bb=0;
	for(int i=0;i<3;i++)
	{
		if(a[i]>b[i])
		al++;
		else if(a[i]<b[i])
		bb++;
	
	}
	
	cout << al <<" " << bb << endl;
	
}
