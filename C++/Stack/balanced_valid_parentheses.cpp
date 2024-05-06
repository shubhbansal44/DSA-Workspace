#include<bits/stdc++.h>
using namespace std;

bool check(char a,char b)
{
    return ((a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']'));
}

bool is_valid(string query)
{
    stack<char> space;
    for(int i=0; i<query.length(); i++)
    {
        if(query[i]=='{'||query[i]=='['||query[i]=='(')
        {space.push(query[i]);}
        else
        {
            if(space.empty())
            return false;
            else if(!(check(space.top(),query[i])))
            return false;
            else
            space.pop();
        }
    }
    return (space.empty());
}

int main()
{
    string query;
    cout<< "enter your query: ";
    getline(cin,query);
    query.erase(remove(query.begin(), query.end(),' '), query.end());
    if(is_valid(query))
    cout<< "String is perfectly balanced with valid parenthses.";
    else
    cout<< "Not a valid string";
    return 0;
}