#include<iostream>
using namespace std;

class Array{
	int size;
	int *elements;
	public:
		Array();
		Array(int x);
		Array(Array &a);
		void push(int x);
		void pop();
		friend ostream& operator<<(ostream& out,Array& a);
		friend istream& operator>>(istream& in,Array &a);
		~Array();
};



istream& operator>>(istream& in,Array& a)
{
	cout << "ENTER ELEMENTS:"<<endl;
	for(int i=0;i<a.size;i++)
	in >> a.elements[i];
	
	return in;
}

ostream& operator<<(ostream& out,Array& a)
{
	cout << "ELEMENTS:"<<endl;
	for(int i=0;i<a.size;i++)
	out << a.elements[i] << endl;
	
	return out;
}

Array::Array()
{
	size=0;
	elements=new int[1];
}
Array::Array(int x)
{
	size=x;
	elements=new int[size+1];
}
Array::Array(Array &a)
{
	size=a.size;
	elements=new int[size+1];
	for(int i=0;i<size;i++)
	{
		elements[i]=a.elements[i];
	}
}

void Array::push(int x)
{
	size++;
	int o=size;
	int *p=new int[o+1];
	for(int i=0;i<size;i++)
	{
		p[i]=elements[i];
	}
	delete [] elements;
	p[o-1]=x;
	//elements= new int[size+1];
	elements = p;
	//delete [] p;
}

Array::~Array()
{
	delete [] elements;
}

int main()
{
	Array a1(3);
	cin >> a1;
	a1.push(4);
	cout << a1;
}
