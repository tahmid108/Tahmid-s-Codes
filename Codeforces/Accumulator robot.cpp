#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,b,a;
	cin >> n >> b >> a;
	
    int ara[n];
	
	for(int i=0;i<n;i++)
	cin >> ara[i];
	
	/*for(int i=0;i<n;i++)
	cout << ara[i] << endl;
	*/
	int cnt=0;
	
	int acc = a;
	
	for(int i=0;i<n;i++)
	{
		
		if(ara[i]==1)
		{
		//	cout << "1 e ki adou dhuke \n";
			if(acc < a && b > 0)
			{
				acc++;
				b--;
				
		//		cout << "b minus korse 1 e eshe\n";
			}
			else if(acc==a && b>0)
			{
				acc--;
			}
			else if(b==0 && acc>0)
			{
				acc--;
		//		cout << "acc minus korse 1 e eshe\n";
			}
			else if(b==0 && acc==0)
			break;
		}
		else
		{
			if(acc>0)
			{
		//    cout << "0 peye acc minus\n";	
			acc--;
		    }
			else if(acc==0 && b>0)
			{
				b--;
		//		cout << "0 peye battery minus\n";
			}
			else if(acc==0 && b==0)
			{
		//		cout << "kisu baki nei\n";
				break;
			}
		}
	//	cout << "loop\n";
		cnt++;
	}
	cout << cnt << endl;
}
