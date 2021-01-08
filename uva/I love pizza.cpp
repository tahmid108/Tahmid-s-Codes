#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	int tc;
	char s[601];
	cin >> tc;
//	cin.ignore();
	while(tc--)
	{
		cin >> s;
		//cout << s; int cnt=1;
		
		int ca=0,cm=0,cr=0,ct=0,ci=0,cg=0;
		for(int i=0;;i++)
		{
		  //  cout << cnt <<endl	;
			if(s[i]=='A')
			ca++;
			else if(s[i]=='M')
			cm++;
			else if(s[i]=='R')
			cr++;
			else if(s[i]=='G')
			cg++;
			else if(s[i]=='I')
			ci++;
			else if(s[i]=='T')
			ct++;
			else if(s[i]=='\0')
			break;

	    }
			ca=ca/3;
			cr=cr/2;
		//	cout << ca << " " << cr << " " << ct << " " << cm << endl;
			
			int a[6];
			a[0]=ca;a[1]=cm;a[2]=cr;a[3]=cg;a[4]=ci;a[5]=ct;
			
			sort(a,a+6);
			
			cout << a[0] << endl;
		}
}
	
