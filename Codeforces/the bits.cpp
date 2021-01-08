#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	char a[n+1],b[n+1];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%c",&b[i]);
	}
	int cnt=0;
	int j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]=='0' && a[j]=='1' && b[i]=='0' && b[j]=='0')
			cnt++;
			else if(a[i]=='0' && a[j]=='1' && b[i]=='0' && b[j]=='1')
			cnt++;
			else if(a[i]=='0' && a[j]=='1' && b[i]=='1' && b[j]=='0')
			cnt++;
			else if(a[i]=='1' && a[j]=='0' && b[i]=='0' && b[j]=='0')
			cnt++;
			else if(a[i]=='1' && a[j]=='0' && b[i]=='0' && b[j]=='1')
			cnt++;
			else if(a[i]=='1' && a[j]=='0' && b[i]=='1' && b[j]=='0')
			cnt++;
		}
	}
	
	printf("%d\n",cnt);
}
