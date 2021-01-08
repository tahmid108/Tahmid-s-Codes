#include<bits/stdc++.h>
using namespace std;

struct student{
	string name;
	int roll;
	int marks;
};

bool comparestd(student a, student b)
{
	if(a.marks!=b.marks)
	 return a.marks>b.marks;
	 
	if(a.roll!=b.roll)
	 return a.roll<b.roll; 
}

int main()
{
	int n;
	cin >> n;
	
	int k=1;
	
	student a[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i].roll;
		cin.ignore();
		cin >> a[i].name;
		cin.ignore();
		cin >> a[i].marks;
		cin.ignore();
	}
	
	sort(a, a+n, comparestd);
	
	cout << "Roll | Name       | Marks\n";
	cout << "-------------------------\n";
	
	for(int i=0;i<n;i++)
	{
		cout << a[i].roll << "\t| " << a[i].name << "\t| " << a[i].marks << endl;
	}
	
	
}
