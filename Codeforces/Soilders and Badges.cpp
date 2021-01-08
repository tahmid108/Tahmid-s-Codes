#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n+1];
	bool b[6000]={0};
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(b[a[i]]==0)
		{
			b[a[i]]=1;
			
		}
		else
		{
			while(b[a[i]])
			{
				a[i]++;
				count++;
			}
			b[a[i]]=1;
		}
	}
	cout << count << endl;
}
