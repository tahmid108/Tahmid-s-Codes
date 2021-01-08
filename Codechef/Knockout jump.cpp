#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n,k;
		cin >> n >> k;
		long long a[n];
		
		for(int i=0;i<n;i++)
		cin >> a[i];
		
		int sum_ = 0,index;
		for(int i=0;i<n;i++)
		{
		//	cout << "looping1\n";
			if(i+k>n)
			{
				break;
			}
			int j = i,min_=1000000007;
			for(int f=0;f<k;f++)
			{
		//		cout << "looping\n";
				if(a[j]<min_)
				{
					min_ = a[j];
					index = j;
				}
				j++;
		//		cout << min_ << " " << index << endl;
			}
			sum_ += min_;
			i = index;
		//	cout << i << " " << j << endl;
		}
		cout << sum_ << endl;
	}
}
