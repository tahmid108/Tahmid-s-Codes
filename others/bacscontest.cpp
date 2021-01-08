#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
   scanf("%d", &T);
    int count = 1;
    while(count <= T)
    {
        long long X,L,N,a,Wn,l,total,chance_to_live;
        scanf("%lld %lld %lld",&X, &L,&N);
        total = N-L+1;
        long long start = L;
        chance_to_live = 0;
        if(X>L)
        {
            chance_to_live = X-L;
            start = X;
        }
        for(long long i = start; i<=N; i++)
        {
                   a = log(i)/log(2);
                   l = i - powl(2,a);
                   Wn = 2*l+1;
                   if(Wn == X)
                   {
                       chance_to_live++;
                   }
        }
        if(chance_to_live == 0)
        {
            printf("Case %d: 0/1\n", count);
            count++;
            continue;
        }
        long long temp = __gcd(chance_to_live, total);
        while(temp != 1)
        {
            chance_to_live/=temp;
            total/=temp;
            temp = __gcd(chance_to_live, total);
        }
        printf("Case %d: %lld/%lld\n", count, chance_to_live,total);
        count++;
    }

    return 0;
}
