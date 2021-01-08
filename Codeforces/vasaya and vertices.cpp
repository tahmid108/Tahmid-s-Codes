#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m,n,a,b,x;
    double ans1;
    cin >> n >> m;
    a= n-(m*2);
    if(a>0)
        ///cout << a << " ";
        x = a;
    else
        ///cout << 0 << " ";
        x = 0;


    /*if(m==0){
        cout << n << endl;
        return 0;
    }*/

    ans1 = (1+sqrt(1+4*2*m))/2;

    /**
    if(ans1-(int)ans1!=0)
    {
        int a=ans1;
        a++;
        cout << n-a << endl;
    }
    else
    {
        int a=ans1;
        cout << n-a << endl;
    }
    //cout << ans1 << endl;
    //ans2 = (1-sqrt(1+4*2*m))/2;
    //cout << ans2 << endl;
    **/

    b = ceil(ans1);

    int y;

    if(n - b > 0)
    {
        y = n - b;
    }
    else
    {
        y = 0;
    }
    if(m==0){
	
    cout << x <<" " << n << endl; 
     }
    else
    cout << x << " " << y << endl;

    return 0;

}
