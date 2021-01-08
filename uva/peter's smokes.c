#include<stdio.h>


int main()
{
	int n , k;
	while(scanf("%d %d",&n,&k)==2 && k>1)
	{
		int sum = 0;
		
		sum += n;
		
		while(n>=k)
		{
		    sum+=n/k;
            n=(n/k)+(n%k);
		}
		
		printf("%d\n",sum);
	}
	return 0;
}
