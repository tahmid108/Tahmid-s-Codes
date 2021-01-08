#include<bits/stdc++.h>
using namespace std;

class stud{
	public:
		int id;
		int ts;
};

int main()
{
	int n;
	cin >> n;
	stud s[n];
	int temp=0;
	int k=0;
	int a[n];
	while(k<n)
	{
		s[k].ts=0;
		s[k].id=k+1;
        for(int i=0;i<4;i++)
	    {
		    cin >> temp;
	        s[k].ts=temp+s[k].ts;
	   }
	   a[k]=s[k].ts;
	    k++;
    }
    sort(a,a+n);
    
    int ans;
    for(int i=n-1;i>=0;i--)
    {
    	//cout << a[i] << endl;
    	//cout << s[0].ts<< endl;
    	if(a[i]==s[0].ts)
    	{
    		ans=n-i;
    		break;
		}
	}
	cout << ans << endl;
	
}
