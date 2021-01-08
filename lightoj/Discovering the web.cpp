#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack <string> f;
	stack <string> b;
	
	int tc;
	
	cin >> tc;
	
	
	int k=1;
	while(k<=tc)
	{
		cout << "Case "<< k << ":\n";
		string c;
		while(!f.empty())
		{
			f.pop();
		}
		while(!b.empty())
		{
			b.pop();
		}
		cin >> c;
		
		string url = "http://www.lightoj.com/";
		while(c!="QUIT")
		{
			
			
			if(c=="FORWARD")
			{
				if(f.empty())
				{
					cout << "Ignored\n";
				}
				else{
					b.push(url);
				    url = f.top();
				    f.pop();
				    cout << url << endl;
				}
			}
			else if(c=="BACK")
			{
				if(b.empty())
				{
					cout << "Ignored\n";
				}
				else{
					f.push(url);
				    url = b.top();
				    b.pop();
				    cout << url << endl;
				}
			}
			else if(c=="VISIT")
			{
				b.push(url);
				cin >> url;
				cout << url << endl;
				
				while(!f.empty())
		        {
			        f.pop();
		        } 
			}
			
			cin >> c;
		}
		
		k++;
	}
}
