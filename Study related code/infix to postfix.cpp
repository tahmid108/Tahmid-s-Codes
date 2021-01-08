#include<bits/stdc++.h>
using namespace std;

class Stack{
	public:
	char a[100];
    int Top= -1;
	void push(char x)
	{
		Top++;
		a[Top]=x;
	}
	void pop()
	{
		Top--;
	}
	char top()
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
	if(x=='+' || x=='-' || x=='*' || x=='/' || x=='^')
	return true;
	return false;
}

int preci(char x)
{
	if(x=='^')
	return 3;
	if(x=='*' || x=='/')
	return 2;
	if(x=='+' || x=='-')
	return 1;
}

bool isopenpar(char x)
{
	if(x=='(')
	return true;
	return false;
}

bool hashigherprec(char x,char y)
{
	if(preci(x)>preci(y))
	return true;
	return false;
}

string infixtopostfix(string s)
{
	//cout << "FUNCTION CALLED"<<" "<< s <<  endl;
	string k;
	Stack stc;
	stc.push('(');
	int j=0;
	//cout << "STACK TOP NOW :"<< stc.top()<<endl;
	for(int i=0;i<s.size();i++)
	{
	//	cout <<i+1<< "st loop character :"<< s[i] << endl;
		if(s[i]==' ' || s[i]==',')
		continue;
		else if(operatorr(s[i]))
		{
			while(!stc.isempty() && !isopenpar(stc.top()) && hashigherprec(stc.top(),s[i]))
			{
	//			  cout << "OPERATOR CALLED"<<endl;
			      k[j]=stc.top();
			      j++;
			      cout << k[j];
				  stc.pop();	
			}
			stc.push(s[i]);
	//		cout << stc.top()<<endl;
		}
		else if(s[i]=='(')
		stc.push(s[i]);
		else if(s[i]==')')
		{
	//		cout << " CLOSED PAR "<< endl;
			while(!stc.isempty() && !isopenpar(stc.top()))
			{
				k[j]=stc.top();
				stc.pop();
				cout << k[j];
				j++;
			}
			stc.pop();
		}
		else
		{
	//		cout << "OPERAND" << endl;
			k[j]=s[i];
			cout << k[j];
			j++;
		}
	}
	//cout <<"LENGTH:"<< j << endl;
    //k[j]='\0';
    //cout << k << endl;
   // for(int i=0;i<j;i++)
    //cout << k[j];
    
    //cout << endl;
    
}

int main()
{
	string s;
	getline(cin,s);
    s.append(")");
//	cout << s.size() << endl;
//	cout << s << endl;
	string k=infixtopostfix(s);
}
