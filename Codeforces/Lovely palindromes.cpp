#include<bits/stdc++.h>
using namespace std;

int main()
{
	char s[1000006];
	cin>>s;
	cin.ignore();
	long long j=strlen(s)-1;
	long long f=strlen(s);
	//cout << f << endl;
	 int k;
	for(int i=f;i<2*f;i++)
	{
		s[i]=s[j];
		j--;
	    k=i;	
	}
	s[k+1]='\0';
	cout << s << endl;
}
