#include<bits/stdc++.h>
using namespace std;

void reverse(string &code)
{
    stack<char> space;
    for(auto x: code)
    {
        space.push(x);
    }
    for(int i=0; i<code.length(); i++)
    {
        code[i]=space.top();
        space.pop();
    }
}

int main()
{
    string code;
    getline(cin,code);
    reverse(code);
    cout<< code;
    return 0;
}