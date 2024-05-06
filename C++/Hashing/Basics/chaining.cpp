#include<bits/stdc++.h>
using namespace std;

class maps
{
    public:
    int size;
    list<int> *chain;
    maps(int n)
    {
        size=n;
        chain=new list<int>[n];
    }
    void insert(int data);
    bool search(int data);
    void remove(int data);
    void display();
};

void maps::insert(int data)
{
    int val=data%size;
    chain[val].push_back(data);
}

bool maps::search(int data)
{
    int val=data%size;
    for(auto x: chain[val])
    {
        if(x==data)
        return true;
    }
    return false;
}

void maps::remove(int data)
{
    int val=data%size;
    chain[val].remove(data);
}

void maps::display()
{
    for(int i=0; i<size; i++)
    {
        for(const auto x: chain[i])
        {
            cout<< x<< " ";
        }
        cout<< "\n";
    }
}

int main()
{
    int n;
    cout<< "enter map size: ";
    cin>> n;
    maps map1=maps(n);
    int z;
    cout<< "enter number of queries: ";
    cin>> z;
    cout<< "enter data: ";
    for(;z!=0;z--)
    {
        int data;
        cin>> data;
        map1.insert(data);
    }
    map1.display();
    return 0;
}