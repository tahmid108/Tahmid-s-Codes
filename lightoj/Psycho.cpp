#include <iostream>

#include <bits/stdc++.h>

#include <fstream>

#include <string>

#include <vector>

#define ll long long



using namespace std;



bool siv[5000002]= {0};

int prime[664600]={0};



void seive()

{



    siv[1] = 1;

    for(int i = 4; i<=5000000; i+=2)

    siv[i] = 1;

    for(int i = 3; i*i <= 5000000; i+=2)

    {



        if(siv[i] == 0)

        {



            for(int j = i*i; j<=5000000; j+=2*i)

            {

                siv[j] = 1;

            }



        }

    }

    prime[0] = 2;

    int k = 1;

    for(int i = 3; i<=5000000; i+=2)

    {

        if(siv[i] == 0)

        {

            prime[k] = i;

            k++;

        }



    }



}



bool fact_(int n)

{

    int even=0,odd=0;

    if(n<= 5000000 && siv[n] == 0)

        return false;

    else

    {

        for(int i = 0; prime[i]*prime[i] <= n;i++)

        {

            int counter = 0, flag = 0;

            while(n%prime[i] == 0)

            {

                n = n/prime[i];

                counter++;

                flag = 1;

            }

            if(counter%2 == 0 && flag)

            {

                even++;

            }

            else if(counter%2 == 1 && flag)

            {

                odd++;

            }

            if( n == 1)

            {

                break;

            }

            else if(n<5000000 && siv[n] == 0)

            {

                odd++;

                break;

            }

        }

        return even>odd ? true:false;



    }

}

int main()

{



   seive();

   int T;

   scanf("%d", &T);

   while(T--)

   {

       int n;

       scanf("%d", &n);

       bool ans = fact_(n);

       if(ans == true)

       {

           printf("Psycho Number\n");

       }

       else

           printf("Ordinary Number\n");





   }













    return 0;

}
