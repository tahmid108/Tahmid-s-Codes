#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	cin >> n;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	cin >> a[i];
	
	int k;
	
	cin >> k;
	
	vector<int>vc;
	
	int j = 0 , mx = 0;
	for(int i=0;i<n-k+1;i++)
	{
		for(int j=0;j<k;j++)
		{
			mx = max(mx,a[i]);
			i++;
		}
		vc.push_back(mx);
		mx = 0;
		i-=(k-1);
		i--;
	//	cout << i << endl;
	}
	
	for(int i=0;i<vc.size();i++)
	{
		cout << vc[i] << " ";
	}
	cout << endl;
}
