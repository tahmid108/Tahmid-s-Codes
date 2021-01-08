#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,temp=0;
	cin >> n;
	string a;
	cin >> a;
	a=a.substr(0,n);
	//cout << a << endl;
	string temp1;
	for(int i=0;i<n-1;i++){
		string s=a.substr(i,2);
		cout << s << endl;
//	string str_to_search, str;
//	char str1[1000], str2[100];

//	cout << "Please enter the string to search : ";
//	str_to_search = (cin.getline(str1, sizeof(str1)), str1);

//	cout << "Enter the substring to find : ";
//	str = (cin.getline(str2, sizeof(str2)), str2);

	int count = 0;
	unsigned int nPos = 0;
	while((unsigned int)(nPos = a.find(s, nPos)) != (unsigned int)std::string::npos)
	{
		count++; nPos += s.size();
	}
	if(count>temp)
	{
		cout << count <<" " <<temp << endl;
		cout << s <<" "<< temp1 <<endl;
		temp=count;
		temp1=s;
	}

//	cout << "Found " << count << " substring(s) in the string" << endl;

//	system("pause");
//	return 0;
       }
       cout << temp1 << endl;
	   
}
	
