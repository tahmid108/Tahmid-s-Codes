#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Dorm{
	public:
		ll noOfrooms;
		ll romm2;
		ll dorm;
};

int main()
{
	ll d,l;
	cin >> d >> l;
	Dorm a[d+1];
	ll sum=0;
	for(int i=1;i<=d;i++)
	{
		cin >> a[i].noOfrooms;
		sum=sum+a[i].noOfrooms;
		for(ll j=sum, ll x=1;j<sum+a[i].room1;j++,x++)
		{
			a[i].dorm=i;
			a[i].romm2=x;
		}
	}
	ll p;
	for(int k=1;k<=l;k++)
	{
		cin >> p;
	for(int i=1;i<=d;i++)
	{
	//	cin >> a[i].noOfrooms;
	//	sum=sum+a[i].noOfrooms;
        for(int k=1;k<sum;k++){
			if(a[i].romm2==p)
			{
				cout << a[i].dorm << " " << a[i].romm2 << endl;
				break;
      		}
        }
	}
	}

	
	
	
	
}
