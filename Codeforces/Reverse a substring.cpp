#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin.ignore();
	cin >> s ;
	int cnt = 0;
	int index1,index2;
	for(int i=1;i<n;i++)
	{
		if(s[i]<s[i-1])
		{
			index1 = i-1;
			index2=i;
			break;
		}
		else
		cnt++;
		
	}
	if(cnt==n-1)
	cout << "NO\n";
	else
	{
		cout << "YES\n" << index1+1 << " " << index2+1 << endl;
	}
}
