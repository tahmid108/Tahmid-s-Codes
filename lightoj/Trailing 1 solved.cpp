#include<bits/stdc++.h>

#include <utility>

using namespace std;



bool siv[1000002]= {0};

bool prime[1000000+1];

long long a[1000001] = {0};



bool isPrime(long long a)

{

    if(a<1000000)

    {

        return !siv[a];

    }

    while(a%2 == 0)

    {

        return false;

    }

    for(long long i = 3; i*i <= a; i+=2)

    {

       while(a%i == 0)

       {

           return false;

       }

    }

    return true;

}

bool isPrimeSquare(long long a)

{

    long long X = sqrtl(a);

    if(X*X == a && a != 1)

        return true;

    else

        return false;

}





void seive()

{

    siv[1] = 1;

    for(int i = 4; i<=1000000; i+=2) siv[i] = 1;

    for(int i = 3; i*i <=1000000; i+=2)

    {

        if(siv[i] == 0)

        {

            for(int j = i*i; j <= 1000000; j+=2*i)

            {

                siv[j] = 1;

            }

        }

    }

    long long j = 0;

	for (long long p=2; p<=1000000; p++)

	{

		if (siv[p] == 0)

		{



			a[j] = p;

			j++;

		}

	}

}





long long countDivisors(long long n)

{



	if (n==1)

		return 1;





	long long ans = 1;

	for (long long i=0; ; i++)

	{



		if (a[i]*a[i]*a[i] > n)

			break;





		long long cnt = 1;

		while (n%a[i]==0)

		{

			n = n/a[i];

			cnt = cnt+1;

		}





		ans = ans*cnt;

	}



	if (isPrime(n))

		ans = ans*2;





	else if (isPrimeSquare(n))

		ans = ans*3;





	else if (n != 1)

		ans = ans*4;



	return ans;

}



int main()

{

    seive();

    //for(int i = 0; i<=1000000; i++)

        //cout << a[i]<<endl;

    long long T,k=1;

    scanf("%lld", &T);

    while(T--)

    {

        long long n,X;

        scanf("%lld", &n);

        X = countDivisors(n) - 1;

        printf("Case %lld: %lld\n",k ,X);







        k++;

    }

	return 0;

}
