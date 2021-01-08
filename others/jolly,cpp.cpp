#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> v;
	int n,p,w;
	while(1==scanf("%d",&n))
	{
		int x=n-1;
		cin >> p;
		while(x--)
		{
			cin >> w;
			v.push_back(abs(w-p));
			p = w;
	    }
		sort(v.begin(),v.end());
		int count=1,cnt=0;
		for(int i=0;i<n-1;i++)
		{
			if(v[i]!=count)
			{
				cnt=-1;
				break;
			}
			count++;
		}
		if (cnt==-1)
		cout << "Not jolly\n";
		else if(cnt==0)
		cout << "Jolly\n";
		v.clear(); 
	}
}
