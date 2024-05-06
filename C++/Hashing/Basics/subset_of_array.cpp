#include<bits/stdc++.h>
using namespace std;

class maps
{
    public:
    int size,capacity;
    vector<int> hmap;
    maps(int n)
    {
        size=n;capacity=n;
        hmap.resize(n,-1);
    }
    int hash1(const int data);
    int hash(const int data,int i);
    int hash2(const int data);
    bool insert(int data);
    bool search(int data);
    bool remove(int data);
    void display();
};

int maps::hash(const int data,int i)
{
    return (hash1(data)+i*hash2(data))%size;
}

int maps::hash1(const int data)
{
    return data%size;
}

int maps::hash2(const int data)
{
    return (size-1)-(data%(size-1));
}

bool maps::insert(int data)
{
    if(capacity==0)
    return false;
    int i=1;
    int h=hash1(data);
    while(hmap[h]!=-1&&hmap[h]!=-2&&hmap[h]!=data)
    h=hash(data,i++);
    if(hmap[h]==data)
    return false;
    else
    {
        hmap[h]=data;
        return true;
    }
}

bool maps::search(int data)
{
    int i=1;
    int h=hash1(data);
    int n=h;
    while(hmap[n]!=-1)
    {
        if(hmap[n]==data)
        return true;
        n=hash(data,i++);
        if(n==h)
        {
            return false;
        }
    }
    return false;
}

bool maps::remove(int data)
{
    int i=1;
    int h=hash1(data);
    int n=h;
    while(hmap[n]!=-1)
    {
        if(hmap[n]==data)
        {
            hmap[n]=-2;
            return true;
        }
        n=hash(data,i++);
        if(n==h)
        return false;
    }
    return false;
}

void maps::display()
{
    for(auto x: hmap)
    {
        cout<< x<< " ";
    }
}

bool is_subset(const vector<int> &origin,const vector<int> &child)
{
    maps space=maps(origin.size());
    for(int i=0; i<origin.size(); i++)
    space.insert(origin[i]);
    for(int i=0; i<child.size(); i++)
    {
        if(!space.search(child[i]))
        return false;
    }
    return true;
}

int main()
{
    int n;
    cout<< "enter origin size: ";
    cin>> n;
    vector<int> origin(n);
    cout<< "enter origin data: ";
    for(auto &x: origin)
    cin>> x;
    int z;
    cout<< "enter child size: ";
    cin>> z;
    cout<< "enter child data: ";
    vector<int> child(z);
    for(auto &x: child)
    cin>> x;
    if(is_subset(origin,child))
    cout<< "Yes given child array is a subset of origin array";
    else
    cout<< "No";
    return 0;
}