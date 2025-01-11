#include<bits/stdc++.h>
using namespace std;

int duration(stack<int> &space,int x)
{
    static int k=1;
    if(space.empty()||space.top()>x)
        return k;
    int t=space.top();space.pop();k++;
    return duration(space,x);
    space.push(t);
}

void stock_span(const vector<int> &stocks,vector<int> &span)
{
    stack<int> space;
    for(int i=0; i<stocks.size(); i++)
    {
        span.push_back(duration(space,stocks[i]));
        space.push(stocks[i]);
    }
}

int main()
{
    int n;
    cin>> n;
    vector<int> stocks(n);
    for(int i=0; i<n; i++)
    {
        cin>> stocks[i];
    }
    vector<int> span;
    stock_span(stocks,span);
    for(auto x: span)
    cout<< x<< " ";
    return 0;
}