#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin.ignore();
	cin >> s;
	string s2 =s ;
	int eights=0;
	vector <int> eightindex;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='8')
		{
			eightindex.push_back(i);
			eights++;
		}
	}
	//fsteight++;
	int x = n-11;
	int y = x;
	x=x/2;
//	cout << x << endl;
	int noneight=0;
//	cout << eightindex[x-1];
	if(eights>x )
	{
		int f = eightindex[x];
	//	cout << f << endl;
		for(int i=0;i<f;i++)
		{
			if(s[i]!='8')
			noneight++;
		}
	//	cout << noneight << endl;
		if(noneight<=x)
		cout << "YES\n";
		else
		cout << "NO\n";
	}
	else
	cout << "NO\n";
}
