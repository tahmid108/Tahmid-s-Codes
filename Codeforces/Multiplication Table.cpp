#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[1005][1005];
ll sol[1005];

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%lld",&a[i][j]);
		}
	}
	
	sol[2]=sqrtl(a[1][2]*a[2][3]/a[1][3]);
	
    //cout << sol[3] << endl;
	
	for(int i=1;i<=n;i++)
	{
		if(i==2)continue;
		sol[i] = a[2][i]/sol[2];
	}
	
	for(int i=1;i<=n;i++)
	{
		if(i==n)printf("%lld\n",sol[n]);
		else
		printf("%lld ",sol[i]);
	}
}
