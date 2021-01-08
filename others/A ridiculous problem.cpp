
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rsize;
    string str;
    vector < string > vec;
    vector < char > a;
    for(int i=0; i<7; i++)
    {
        cin >> str;
        rsize = str.size();
        vec.push_back(str);
    }
    int blocks = rsize/5;
    int kb = 0;

    for(int k=0; k<blocks; k++)
    {
        if(vec[0][kb+1]=='*' && vec[0][kb+2]=='*' && vec[0][kb+3]=='*' && vec[0][kb+4]=='*' && vec[0][kb+0]=='*')
        {
            if(vec[0][kb+4]=='*' && vec[1][kb+4]=='*' && vec[6][kb+4]=='*')
                a.push_back('Z');
            else if(vec[0][kb+4]=='*' && vec[6][kb+4]=='*')
                a.push_back('E');
            else if(vec[1][kb+0]=='*')
                a.push_back('F');
            else
                a.push_back('T');
        }
        else if(vec[0][kb+1]=='*' && vec[0][kb+2]=='*' && vec[0][kb+3]=='*' && vec[0][kb+4]=='*' && vec[0][kb+0]=='.')
        {
            a.push_back('S');
        }
        else if(vec[0][kb+1]=='*' && vec[0][kb+2]=='*' && vec[0][kb+3]=='*' && vec[0][kb+0]=='*')
        {
            if(vec[1][kb+4]=='*' && vec[2][kb+4]=='*' && vec[6][kb+4]=='*')
                a.push_back('R');
            else if(vec[1][kb+4]=='*' && vec[2][kb+4]=='*' && vec[5][kb+4]=='*' && vec[3][kb+4]=='*' && vec[4][kb+4]=='*')
                a.push_back('D');
            else if(vec[1][kb+4]=='*' && vec[2][kb+4]=='*' && vec[5][kb+4]=='*' && vec[4][kb+4]=='*')
                a.push_back('B');
            else
                a.push_back('P');
        }
        else if(vec[0][kb+2]=='*' && vec[0][kb+3]=='*' && vec[0][kb+4]=='*')
        {
            a.push_back('J');
        }
        else if(vec[0][kb+1]=='*' && vec[0][kb+3]=='*' && vec[0][kb+2]=='*')
        {
            if(vec[1][kb+4]=='*' && vec[2][kb+4]=='*' && vec[5][kb+4]=='*' && vec[3][kb+4]=='*' && vec[4][kb+4]=='*' && vec[6][kb+4]=='*')
                a.push_back('A');
            else if(vec[1][kb+4]=='*' && vec[2][kb+4]=='*' && vec[5][kb+4]=='*' && vec[3][kb+4]=='*' && vec[4][kb+4]=='*')
                a.push_back('O');
            else if(vec[1][kb+4]=='*' && vec[2][kb+4]=='*' && vec[6][kb+4]=='*' && vec[3][kb+4]=='*' && vec[4][kb+4]=='*')
                a.push_back('Q');
            else if(vec[1][kb+4]=='*' &&  vec[5][kb+4]=='*'  && vec[4][kb+4]=='*')
                a.push_back('G');
            else if(vec[1][kb+4]=='*' &&  vec[5][kb+4]=='*' )
                a.push_back('C');
            else
                a.push_back('I');
        }
        else if(vec[0][kb+0]=='*' && vec[0][kb+4]=='*')
        {
            if(vec[1][kb+4]=='*' && vec[2][kb+4]=='*' && vec[5][kb+4]=='*' && vec[3][kb+4]=='*' && vec[4][kb+4]=='*' && vec[6][kb+4]=='*' && vec[0][kb+4]=='*' && vec[1][kb+1]=='*')
                a.push_back('M');
            else if(vec[1][kb+4]=='*' && vec[2][kb+4]=='*' && vec[5][kb+4]=='*' && vec[3][kb+4]=='*' && vec[4][kb+4]=='*' && vec[6][kb+4]=='*' && vec[0][kb+4]=='*' && vec[2][kb+1]=='*')
                a.push_back('N');
            else if(vec[1][kb+4]=='*' && vec[2][kb+4]=='*' && vec[5][kb+4]=='*' && vec[3][kb+4]=='*' && vec[4][kb+4]=='*' && vec[6][kb+4]=='*' && vec[0][kb+4]=='*' && vec[3][kb+3]=='*')
                a.push_back('H');
            else if(vec[1][kb+4]=='*' && vec[2][kb+4]=='*' && vec[5][kb+4]=='*' && vec[3][kb+4]=='*' && vec[4][kb+4]=='*' && vec[6][kb+2]=='*' && vec[0][kb+4]=='*')
                a.push_back('U');
            else if(vec[1][kb+4]=='*' && vec[2][kb+4]=='*' && vec[5][kb+4]=='*' && vec[3][kb+4]=='*' && vec[4][kb+4]=='*' && vec[6][kb+2]=='.' && vec[0][kb+4]=='*')
                a.push_back('W');
            else if(vec[1][kb+4]=='*' && vec[2][kb+4]=='*' && vec[0][kb+4]=='*' && vec[3][kb+4]=='*')
                a.push_back('V');
            else if(vec[1][kb+4]=='*' && vec[0][kb+4]=='*' && vec[5][kb+4]=='*' && vec[6][kb+4]=='*' )
                a.push_back('X');
            else if(vec[1][kb+4]=='*' && vec[0][kb+4]=='*')
                a.push_back('Y');
            else
                a.push_back('K');
        }
        else
            a.push_back('L');

        kb+=6;
    }
    for(int i=0; i<a.size(); i++)
    {
        cout << a[i] ;
    }
    cout << endl;
}
