#include<cstdio>
using namespace std;

int main()
{
	long long t,p,q,n;
	scanf("%lld",&t);
	while(t--)
    {
    	scanf("%lld %lld %lld",&p,&q,&n);
    	p=p+q;
        long long ans = p/n;
    	if(ans%2==0)
    	printf("CHEF\n");
    	else 
    	printf("COOK\n");
    	
	}
}
