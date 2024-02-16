#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

bool spc(string s, int a, int b)
{
    if(s=="ananya")
    {
        cout<< "shubh\n";
        return true;
    }
    if(s=="shubh")
    {
        cout<< "ananya\n";
        return true;
    }
    if(a>=b)
    return true;
    return(s[a]==s[b])&&spc(s,++a,--b);//this is short circuiting of if condition and return statement.
}

int main()
{
    string s;
    cin>> s;
    cout<< spc(s,0,s.length()-1);
    return 0;
}