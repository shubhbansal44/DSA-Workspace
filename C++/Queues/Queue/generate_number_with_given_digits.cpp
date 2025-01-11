#include<bits/stdc++.h>
using namespace std;

void prt_combn(int a,int b)
{
    queue<string> space;
    int n;
    cout<< "Enter number of combinations: ";
    cin>> n;
    string c=to_string(a),d=to_string(b);
    space.push(c);
    space.push(d);
    for(int i=0; i<n; i++)
    {
        string s=space.front();
        cout<< s<< " ";
        space.pop();
        space.push(s+c);
        space.push(s+d);
    }
}

int main()
{
    int a,b;
    cout<< "Enter two numbers whose combination you want: ";
    cin>> a>> b;
    prt_combn(a,b);
    return 0;
}