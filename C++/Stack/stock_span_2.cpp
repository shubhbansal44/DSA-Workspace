#include<bits/stdc++.h>
using namespace std;

void stock_span(const vector<int> &stocks,vector<int> &span)
{
    span.push_back(1);
    stack<int> space;
    space.push(0);
    for(int i=1; i<stocks.size(); i++)
    {
        while(!(space.empty())&&stocks[space.top()]<=stocks[i])
            space.pop();
        if(!space.empty())
            span.push_back(i-space.top());
        else
            span.push_back(i+1);
        space.push(i);
    }
}

int main()
{
    int n;
    cout<< "enter size: ";
    cin>> n;
    vector<int> stocks(n);
    cout<< "enter data: ";
    for(int i=0; i<n; i++)
    {
        cin>> stocks[i];
    }
    vector<int> span;
    stock_span(stocks,span);
    cout<< "span of each stock: ";
    for(auto x: span)
    cout<< x<< " ";
    return 0;
}