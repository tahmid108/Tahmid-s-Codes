#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int v1[n+1];
	bool v2[2000005]={false};
	//vector<int> v2[n+1];
	int a;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		v1[i]=a;
		v2[a]=true;
	}
	int k=1;
	int top=0;
	while(k<=n)
	{
		cin >> a;
		if(v2[a]==false)
		{
			if(k==n)
			{
				cout << "0\n" ;
				return 0;
			}
			cout << "0 ";
			k++;
			continue;
		}
		int counter=0;
		for(int i=top;i<n;i++)
		{
			counter++;
			if(v1[i]==a)
			{
				for(int s=i;s>=top;s--)
				{
					v2[v1[s]]=false;
				}
				if(k==n)
				{
					cout << counter << endl;
					return 0;
				}
				cout << counter << " ";
				top=i+1;
				break;
			}
		}
		
		k++;
	}
}
