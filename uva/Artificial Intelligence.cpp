#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
    int k=1;
    cin.ignore();
    while(tc>=k)
    {
    	string s;
    	double p=0,u=0,I=0,pfrac=0,ufrac=0,Ifrac=0;
    	bool flagp=0,flagu=0,flagi=0;
    	//cin.ignore();
    	getline(cin,s);
    	for(int i=0;i<s.size();i++)
    	{
    		if(s[i]=='P' && s[i+1]=='=')
    		{
    			flagp=1;
    			i+=2;
    			while(s[i]>=48 && s[i]<=57)
    			{
    				double countprec=0;
    				p=p*10+s[i]-48;
    				//cout << p << endl;
    				if(s[i+1]=='.')
    				{
    					i+=2;
    					while(s[i]>=48 && s[i]<=57)
    					{
    						pfrac = pfrac*10+s[i]-48;
    						//cout << pfrac << endl;
    						countprec++;
    						i++;
						}
							pfrac = pfrac/pow(10,countprec);
						 if(s[i]<48 || s[i]>57)
						   i--;
					}
					//cout << "P = " << p << endl;
					i++;
				}
				if(s[i]=='W')
						p=p+pfrac;
						else if(s[i]=='m')
						p=(p+pfrac)/1000;
						else if(s[i]=='k')
						p=(p+pfrac)*1000;
						else if(s[i]=='M')
						p=(p+pfrac)*1000000;
			}
			else if(s[i]=='U' && s[i+1]=='=')
    		{
    			flagu=1;
    			i+=2;
    			while(s[i]>=48 && s[i]<=57)
    			{
    				//cout << s[i]-48 << endl;
    				double countprec=0;
    				u=u*10+s[i]-48;
    				//cout << u << endl;
    				if(s[i+1]=='.')
    				{
    					i+=2;
    					while(s[i]>=48 && s[i]<=57)
    					{
    						ufrac = ufrac*10+s[i]-48;
    			//			cout << ufrac << " " ;
    						countprec++;
    						i++;
						}
				//		cout << endl << countprec << endl;
							ufrac = ufrac/pow(10,countprec);
				//			cout << ufrac << endl; 
							//cout << ufrac << endl;
						 if(s[i]<48 || s[i]>57)
						   i--;
					}
					//cout << " U = "<<u << endl;
					i++;
				}
				if(s[i]=='V')
						u=u+ufrac;
						else if(s[i]=='m')
						u=(u+ufrac)/1000;
						else if(s[i]=='k')
						u=(u+ufrac)*1000;
						else if(s[i]=='M')
						u=(u+ufrac)*1000000;
			}
			if(s[i]=='I' && s[i+1]=='=')
    		{
    			flagi=1;
    			i+=2;
    			while(s[i]>=48 && s[i]<=57)
    			{
    				//cout << s[i] << " " << s[i-1] << s[i+1];
    				double countprec=0;
    				I=I*10+s[i]-48;
    				//cout << I << endl;
    				if(s[i+1]=='.')
    				{
    					i+=2;
    					while(s[i]>=48 && s[i]<=57)
    					{
    						Ifrac = Ifrac*10+s[i]-48;
    						//cout << Ifrac << endl;
    						countprec++;
    						i++;
						}
						   if(s[i]<48 || s[i]>57)
						   i--;
							Ifrac = Ifrac/pow(10,countprec);
						//cout << Ifrac << endl;
					//	cout << s[i] << " ";	
					/*	if(s[i]=='A')
						I=I+Ifrac;
						else if(s[i]=='m')
						I=(I+Ifrac)/1000;
						else if(s[i]=='k')
						I=(I+Ifrac)*1000;
						else if(s[i]=='M')
						I=(I+Ifrac)*1000000;*/
						
					//	cout << I << endl;
					}
						
				   //cout<< " I = "<<I<<endl;
					i++;
				}
					if(s[i]=='A')
						I=I+Ifrac;
						else if(s[i]=='m')
						I=(I+Ifrac)/1000;
						else if(s[i]=='k')
						I=(I+Ifrac)*1000;
						else if(s[i]=='M')
						I=(I+Ifrac)*1000000;
			}
		}
		if(flagp==1 && flagu==1)
		{
			I=p/u;
			cout << "Problem #"<<k<<endl;
			cout << "I="<<setprecision(2) << fixed << I << "A" <<endl << endl;
		}
		else if(flagi==1 && flagu==1)
		{
			p=u*I;
			cout << "Problem #"<<k<<endl;
			cout << "P="<<setprecision(2) << fixed << p << "W" << endl << endl;
		}
		else if(flagi==1 && flagp==1)
		{
			u=p/I;
			cout << "Problem #"<<k<<endl;
			cout << "U="<<setprecision(2) << fixed << u << "V" << endl << endl;
		}
    	k++;
	}
}
