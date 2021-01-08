#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
	
	double a,b,c;
	cin >> a >> b >> c;
	
	double s = (a+b+c)/2.0;
	if(2*s - max(a,max(b,c)) <= max(a,max(b,c)))
	cout << "Not a Triangle\n";
	else if(a==b && b==c)
	{
		cout<< "Equilateral Triangle ";
		 printf("%0.1lf\n",.25*a*a*sqrt(3));
	}
	else if(a==b || b==c || c==a)
	{
		cout << "Isosceles Triangle ";
 printf("%0.1lf\n",sqrt(s*(s-a)*(s-b)*(s-c)));
 	}
	else
	{
		cout << "Scalene Triangle ";
printf("%0.1lf\n",sqrt(s*(s-a)*(s-b)*(s-c)));
	}
}
}
