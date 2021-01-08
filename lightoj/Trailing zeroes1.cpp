#include<cstdio>
#include<math.h>
using namespace std;

int main()
{
	long long l;
	int tc;
	scanf("%d",&tc);
	int i=1;
	while(i<=tc)
	{
		int count=0;
		scanf("%lld",&l);
		for(int j=2;j<=sqrt(l);j++)
		{
			if(l%j==0)
			{
				if(l/j==j)
				count++;
				else
				count+=2;
			}
		}
		printf("Case %d: %d\n",i,count+1);
		i++;
	}
}
