#include<cstdio>
#include<math.h>
using namespace std;

int main()
{
	long long t,n,nbits,nibs,nbytes;
	scanf("%lld",&t);
	while(t--)
	{
		nbits=0;
		nibs=0;
		nbytes=0;
		scanf("%lld",&n);
	    long long ans;
	    long long temp;
	    ans = n/26;
	    if(n%26>0 && n%26<=2)
	    nbits = pow(2,ans);
	    else if(n%26>2 && n%26<=10)
	    nibs = pow(2,ans);
	    else if(n%26==0)
	    nbytes = pow(2,ans-1);
	    else
	    nbytes = pow(2,ans);
	    
	    printf("%lld %lld %lld\n",nbits,nibs,nbytes);
	    
	}
}
