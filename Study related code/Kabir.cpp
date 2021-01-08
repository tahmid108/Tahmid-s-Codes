#include<iostream>
using namespace std;

class New{
	int a;
	public:
		void input(int x)
		{
			a=x;
		}
		void output()
		{
			cout << a << endl;
		}
		friend int operator+(int x,New A)
		{
			return A.a+x;
		}
		
};

int main()
{
	New A;
	A.input(4);
	A.output();
	cout << 5+A <<endl;
	//A.output();
}
