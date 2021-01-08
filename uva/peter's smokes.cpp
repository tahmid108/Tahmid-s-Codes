#include<stdio.h>


int main()
{
	int n , k;
	while(scanf("%d %d",&n,&k)!=EOF)
	{
		long long sum = 0;
		
		sum += n;
		
		while(n/k)
		{
			n = n/k;
			sum+=n;
		}
		
		printf("%lld\n",sum);
	}
}
