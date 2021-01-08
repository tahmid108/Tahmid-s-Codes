#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	cin.ignore();
	getline(cin,s);
	cout << n << endl << s;
}
