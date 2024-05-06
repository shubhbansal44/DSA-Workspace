#include<bits/stdc++.h>
using namespace std;


int prc(char x)
{
    if(x=='^')
    return 3;
    else if(x=='*'||x=='/'||x=='%')
    return 2;
    else if(x=='(')
    return 0;
    return 1;
}

bool priority(char a,char b)
{
    if(prc(a)>prc(b))
    return false;
    else if(prc(a)<prc(b))
    return true;
    return true;
}

string to_postfix(string query)
{
    stack<char> space;string output;
    for(int i=0; i<query.size(); i++)
    {
        char x=query[i];
        if((x>='a'&&x<='z')||(x>='A'&&x<'Z')||(x>='0'&&x<='9'))
        output.push_back(x);
        else if(x=='(')
        space.push(x);
        else if(x==')')
        {while(space.top()!='('){output.push_back(space.top());space.pop();}space.pop();}
        else
        {
            if((!(space.empty())&&priority(x,space.top())))
            {while((!(space.empty())&&priority(x,space.top()))){output.push_back(space.top());space.pop();}}
            space.push(x);
        }
    }
    while(!space.empty())
    {output.push_back(space.top());space.pop();}
    return output;
}

int main()
{
    string query;
    cout<< "enter your query: ";
    getline(cin,query);
    query.erase(remove(query.begin(), query.end(),' '), query.end());
    string transformed=to_postfix(query);
    cout<< transformed;
    return 0;
}