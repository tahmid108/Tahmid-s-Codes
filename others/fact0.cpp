#include<cstdio>
#include<math.h>
#define ll long long
using namespace std;

void con (ll a)
{
	ll count1=0,count2=0,temp=0;
	while(a%2==0)
	{
		count1++;
		temp=1;
		
		a=a/2;
	}
	if(temp==1)
	{
		printf("2^%lld ",count1);
	}
	for(int i=3;i<=sqrt(a);i+=2)
	{
		if(a%i==0)
		{
			count2=0;
			while(a%i==0)
			{
				count2++;
				a=a/i;
			}
			if(temp==1)
			printf("%lld^%lld\n",i,count2);
			else if(temp==0)
			printf("%lld^%lld ",i,count2);
		}
	}
	if(a>2)
	printf("%lld^1\n",a);

}

int main()
{
	ll a;
	while(scanf("%lld",&a))
	{
		if(a==0)
		break;
		con(a);
	}
}
