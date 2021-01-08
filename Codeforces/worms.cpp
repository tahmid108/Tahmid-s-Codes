#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> a;
	int n;
	cin >> n;
	int b,temp=0;
	a.push_back(1);
	for(int i=0;i<n;i++)
	{
		cin >> b;
        for(int k=1;k<=b;k++)
        {
        	a.push_back(i+1);
		}
	}
	int q;
	cin >> q;
	for(int i=0;i<q;i++)
	{
		int x;
		cin >> x;
		cout << a[x] << endl; 
	}
}
