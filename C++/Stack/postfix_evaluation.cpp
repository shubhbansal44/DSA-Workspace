#include<bits/stdc++.h>
using namespace std;

int solve(int a,char x,int b)
{
    if(x=='*')
    return a*b;
    else if(x=='/')
    return a/b;
    else if(x=='+')
    return a+b;
    else if(x=='%')
    return a%b;
    else if(x=='-')
    return a-b;
    return pow(a,b);
}

int calc(string exp)
{
    stack<int> space;
    for(int i=0; i<exp.length(); i++)
    {
        char x=exp[i];
        if(isdigit(x))
        {space.push((x-'0'));}
        else
        {
            int a=space.top();space.pop();
            int b=space.top();space.pop();
            int z=solve(b,x,a);
            space.push(z);
        }
    }
    return space.top();
}

int main()
{
    string expression;
    cout<< "enter any mathematical expression: ";
    getline(cin,expression);
    expression.erase(remove(expression.begin(), expression.end(),' '), expression.end());
    cout<< "Solution: "<<calc(expression);
    return 0;
}