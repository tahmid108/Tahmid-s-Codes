#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	//long long [n+1];
	vector <long long> v;
	map <long long , long long> m;
	long long min=1000000009,max=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
		m[x]++;
		
		if(x>max)
		max=x;
		
		if(x<min)
		min=x;
	}
	//sort(v.begin(),v.end());
	long long ans=0;
	//long long count=0;
    //nt y=n;
	//long long lml=1;
	//long long hml=1;
	ans = max-min;
	if(ans==0)
	{
		cout << ans <<" " << ((n-1)*n)/2 << endl;
		return 0;
	}
	/*for(int i=0;i<n-1;i++)
	{
		//ans = v[y-1]-v[i];
		if(v[i]==v[i+1])
		{
			lml++;
		}
		else 
		break;
	}
	for(int i=n-1;i>=0;i--)
	{
		if(v[i]==v[i-1])
		{
			hml++;
		}
		else
		break;
	}*/
	cout << ans << " " << m[max]*m[min] << endl;
}
