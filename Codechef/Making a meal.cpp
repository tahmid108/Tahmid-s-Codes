#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		int x;
		cin >> x;
		int c=0,e=0,o=0,d=0,f=0,h=0;
		while(x--)
		{
			string s;
			cin.ignore();
			cin >> s;
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='c')
				c++;
				else if(s[i]=='e')
				e++;
				else if(s[i]=='o')
				o++;
				else if(s[i]=='d')
				d++;
				else if(s[i]=='h')
				h++;
				else if(s[i]=='f')
				f++;
			}
			
		}
		c= c/2;
		e = e/2;
		//cout << c << " " << o << " " << d << " " << e << " " << h << " " << f << endl;
		int min_ = min(c,min(h,min(e,min(o,min(d,f)))));
			if(min_==c)
			cout << c << endl;
			else if(min_ == e)
			cout << e << endl;
			else if(min_==o)
			cout << o << endl;
			else if(min_ == h)
			cout << h << endl;
			else if(min_ == d)
			cout << d << endl;
			else if(min_ == f)
			cout << f << endl;
	}
}
