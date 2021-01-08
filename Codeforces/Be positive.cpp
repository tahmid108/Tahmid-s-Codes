#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	int zeros=0,pos=0,neg=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]==0)
		zeros++;
		else if(a[i]<0)
		neg++;
		else
		pos++;
		
	}
	
	float x = float(n)/2.0;
	
	int y = ceil(x);
	

	if(pos>=y)
	cout << 1 << endl;
	else if(neg>=y)
	cout << -1 << endl;
	else if(zeros>=y)
	cout << 0 << endl;
	
	
}
