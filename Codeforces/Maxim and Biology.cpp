#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	cin >> n;
	string s;
	
	cin.ignore();
	
	cin >> s;
	
//	cout << s[1] << 67-s[1] << endl;
	
	int min_ = 10000007;
    for(int i=0;i<n-3;i++)
    {
    	int ans1,ans2,ans3,ans4;
    	//cout << "loop\n";
    	int x1 = abs(s[i]-65);
    	if(x1>13)
    	ans1 = 26-x1;
    	else
    	ans1 = x1;
    	int x2 = abs(s[i+1]-67);
    	if(x2>13)
    	ans2 = 26-x2;
    	else
    	ans2 = x2;
    	int x3 = abs(s[i+2]-84);
    	if(x3>13)
    	ans3 = 26-x3;
    	else
    	ans3 = x3;
    	int x4 = abs(s[i+3]-71);
    	if(x4>13)
    	ans4 = 26-x4;
    	else
    	ans4 = x4;
    	
    	
    	
    	//cout << ans1 << " " << ans2 << " " << ans3 << " " << ans4 << endl;
    	min_ = min(min_,ans1+ans2+ans3+ans4);
	}
	
	cout << min_ << endl;
}
