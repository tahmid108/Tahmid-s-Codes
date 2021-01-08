#include<bits/stdc++.h>
using namespace std;

class Stack{
	public:
	int a[100];
    int Top= -1;
	void push(int x)
	{
		Top++;
		a[Top]=x;
	}
	void pop()
	{
		Top--;
	}
	int top()
	{
		return a[Top];
	}
	bool isempty()
	{
		if(Top==-1)
		return true;
		else 
		return false;
	}
};

bool operatorr(char x)
{
	if(x=='+' || x=='-' || x=='*' || x=='/')
	return true;
	return false;
}

bool operand(char x)
{
	if(x>=48 && x<=57)
	return true;
	return false;
}

int perform(char x,int y,int z)
{
	if(x=='+')
	return y+z;
	if(x=='-')
	return y-z;
	if(x=='*')
	return y*z;
	if(x=='/')
	return y/z;
}

long long Evaluate_postfix(string s)
{
	Stack stc;
//	cout << s[s.size()-1] << endl;
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]==' ' || s[i]==',')
		continue;
		else if(operatorr(s[i]))
		{
		//	cout << s[i] << endl;
			int op1=stc.top();
			 
		//	 cout << op2<< endl;
			stc.pop();
			
			int op2=stc.top();
		//	cout << op1 << endl;
			stc.pop();
			int k=perform(s[i],op1,op2);
		//	cout << k << endl;
			stc.push(k);
		}
		else if(operand(s[i]))
		{
			int sum=0,j=0;
			while(operand(s[i]))
			{
				int temp=s[i]-48;
				sum=temp*pow(10,j)+sum;
		//		cout << temp <<" "<< sum << endl;
				j++;
				i--;
			}
			stc.push(sum);
		}
	}
	return stc.top();
}


int main()
{
	string s;
	cout << "INPUT YOUR EXPRESSION\n";
	getline(cin,s);
	//reverse(s.begin(),s.end());
	//cout << s << endl;
    long long x=Evaluate_postfix(s);
	cout << "ANSWER :"<< x << endl;	
}
