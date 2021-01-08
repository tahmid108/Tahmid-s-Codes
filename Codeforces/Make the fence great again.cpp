#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*Hoynai*/
bool isindex(int a,int n)
{
	if(a>=0 && a<n)
	return true;
	
	return false;
}
int main()
{
	int q;
	int n;
	//vector<pair<ll,ll>>v;
	cin >> q;
	while(q--)
	{
		ll rub=0;
		vector < pair< ll,ll > > v;
		cin >> n;
		
		for(int i=0;i<n;i++)
		{
			ll a,b;
			cin >> a >> b;
			v.push_back(make_pair(a,b));
		}
		
		for(int i=0;i<n-1;i++)
		{
			if(v[i].first==v[i+1].first)
			{
				
			    if(v[i].first+1==v[i-1].first && v[i+1].first+1==v[i+2].first && isindex(i-1,n) && isindex(i+2,n))
					{
						if(v[i].second>v[i+1].second)
						{
						    rub+=(v[i+1].second*2);
						    v[i+1].first+=2;
					    }
					    else
					    {
					    	rub+=(v[i].second*2);
						    v[i].first+=2;
						}
					    
					}
				
			
				else if(isindex(i-1,n) && v[i].first+1==v[i-1].first)
					{
						if(v[i+1].second>v[i].second*2)
						{
							rub+=(v[i].second*2);
						    v[i].first+=2;
						}
						else{
							rub+=v[i+1].second;
							v[i+1].first++;
						}
					}
				
				else if(isindex(i+2,n) && v[i+1].first+1==v[i+2].first)
					{
						if(v[i].second>v[i+1].second*2)
						{
							rub+=(v[i+1].second*2);
						    v[i+1].first+=2;
						}
						else{
							rub+=v[i].second;
							v[i].first++;
						}
					}
				else{
					if(v[i+1].second>v[i].second){
						rub+=v[i].second;
						v[i].first++;
					}
					else
					{
						rub+=v[i+1].second;
						v[i+1].first++;
					}
				}
			}
		}
		cout << rub << endl;
	}
}
