#include<bits/stdc++.h>
using namespace std;

void converter(long long x)
{
	if(x>=10000000)
	{
		converter(x/10000000);
		printf(" kuti");
		x=x%10000000;
	}
	if(x>=100000)
	{
		converter(x/100000);
		printf(" lakh");
		x=x%100000;
	}
	if(x>=1000)
	{
		converter(x/1000);
		printf(" hajar");
		x=x%1000;
	}
	if(x>=100)
	{
		converter(x/100);
		printf(" shata");
		x=x%100;
		
	}
	if(x>=1)
	printf(" %d",x);

}
int main()
{
	long long x;
	int i=0;
	while(scanf("%lld",&x)!=EOF)
	{
		printf("%4d.",++i);
		if(x==0)
		printf(" 0");
		converter(x);
		printf("\n");
	}
}
