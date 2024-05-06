#include<bits/stdc++.h>
using namespace std;

class form
{
    public:
    int capacity,god;
    vector<int> stack;
    form(int x)
    {
        capacity=x;
        stack.resize(x);
        god=-1;
    }
    void push(const int data);
    int pop();
    int size();
    int peek();
    bool is_empty();
    void display();
};

void form::push(const int data)
{
    god++;
    stack[god]=data;
}

int form::pop()
{
    god--;
    return stack[god+1]; 
}

int form::peek()
{
    return stack[god];
}

int form::size()
{
    return (god+1);
}

bool form::is_empty()
{
    return (god==-1);
}

void form::display()
{
    for(auto it: stack)
    cout<< it<< "\n";
}

int main()
{
    int n;
    cin>> n;
    form stack=form(n);
    return 0;
}