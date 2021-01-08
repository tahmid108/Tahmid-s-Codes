#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int x=n;
    for(int j=-n;j<=n;j++)
    {
    	int cnt= n-abs(j);
    	for(int i=0;i<abs(j);i++)
    	{
    		cout << "  ";
		}
		for(int i=0;i<cnt;i++)
		{
			cout << i <<" ";
		}
		for(int i=cnt;i>0;i--)
		{
			cout << i << " ";
		}
		cout << 0 << endl;
	}
}
