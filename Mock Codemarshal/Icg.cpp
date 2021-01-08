#include<bits/stdc++.h>
using namespace std;
#define ll long long



struct s{
	int id;
	int is;
	int ip;
	int ts;
	int tp[61];
	int totalpen;
	int rank;
};

bool comparestd(s a, s b)
{
	if(a.rank!=b.rank)
	 return a.rank<b.rank;
	 

}

int main(){
	int tc;
	cin >> tc;
	int k = 1;
	
	while(k<=tc)
	{
		int n;
		cin >> n;
		s a[n];
		for(int i=0;i<n;i++)
		{
			int temp;
			cin >> a[i].id;
			cin >> a[i].is;
			cin >> a[i].ip;
			cin >> a[i].ts;
			for(int j=0;j<a[i].ts;j++)
			{
				cin >> a[i].tp[j] ;
			}
			a[i].totalpen = a[i].ip;
		}
		
		int x[n];
		for(int i=0;i<n;i++)
		{
			cin >> x[i];
			for(int j=0;j<n;j++)
			{
				if(x[i]==a[j].id){
				
				a[j].rank = i+1;
				break;
				}
			}
		}
		
		sort(a,a+n,comparestd);
		
				
		for(int i=0;i<a[0].ts;i++)
		a[0].totalpen+= a[0].tp[i];
	//	a[0].totalpen += a[0].ip;
		a[0].ts += a[0].is;
		
		//cout << a[0].totalpen << " " << a[0].ts << endl;
		
		bool flag = 1;
		for(int i=1;i<n;i++)
		{
			int kk = a[i].ts;
			a[i].ts = a[i].is;
			
			while(kk>=0)
			{
			     if(a[i].is+kk<a[i-1].ts)
			     {
			     	for(int xx=0;xx<kk;xx++)
			     	a[i].totalpen+= a[i].tp[xx];
			     	a[i].ts += kk;
			     	
					 break;
				 }
				 else if(a[i].is+kk == a[i-1].ts)
				 {
				 	int temp = a[i].ip;
				 	for(int xx=0;xx<kk;xx++)
				 	{
				 		temp+= a[i].tp[xx];
					}
					
					if(temp >= a[i-1].totalpen)
					{
						a[i].totalpen = temp;
						a[i].ts = kk + a[i].ts;
						break;
					}
				 	
				 }
				 kk--;
				 
			//	 cout << a[i].totalpen << " " << a[i].ts << endl;
			}
			
			if(kk==-1) {
			flag = 0; break; }
			
		}
		
		if(flag==0)cout << "Case " << k << ":" << " Say no to rumour >:\n";
		else  cout << "Case " << k << ":" << " We respect our judges :)\n";
		
		
		k++;
	}
}
