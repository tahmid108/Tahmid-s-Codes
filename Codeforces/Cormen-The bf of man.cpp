#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;
	vector <int> v1;
	//vector <int> v2;
	int count=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		v1.push_back(x);
	}
	//v2.push_back(v1[0]);
	//v2=v1;
	int temp;
	for(int i=1;i<n;i++)
	{
		if((v1[i]+v1[i-1])<k)
		{
			temp=v1[i];
			v1[i]=k-v1[i-1];
			count+=(v1[i]-temp);
	    }
	}
	cout << count << endl;
	for(int i=0;i<n;i++)
	{
		if(i==n-1)
		{
			cout << v1[i] << endl;
			return 0;
		}
		cout << v1[i] << " ";
	}
}
