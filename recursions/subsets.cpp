#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

void subset(string s,string ans="",int i=0)
{
    if(i==s.length())
    {cout<< ans<< " ";return;}
    subset(s,ans,i+1);
    subset(s,ans+s[i],i+1);
}

int main()
{
    string s;
    cin>> s;
    subset(s);
    return 0;
}