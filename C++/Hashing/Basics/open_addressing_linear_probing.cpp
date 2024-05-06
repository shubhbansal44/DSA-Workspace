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
    int hash(int data);
    bool insert(int data);
    bool search(int data);
    bool remove(int data);
    void display();
};

int maps::hash(const int data)
{
    return data%size;
}

bool maps::insert(int data)
{
    if(capacity==0)
    return false;
    int h=hash(data);
    while(hmap[h]!=-1&&hmap[h]!=-2&&hmap[h]!=data)
    h=(h+1)%size;
    if(hmap[h]==data)
    return false;
    else
    {
        hmap[h]=data;
        capacity--;
        return true;
    }
}

bool maps::search(int data)
{
    int h=hash(data);
    int n=h;
    while(hmap[n]!=-1)
    {
        if(hmap[n]==data)
        return true;
        n=(n+1)%size;
        if(n==h)
        {
            return false;
        }
    }
    return false;
}

bool maps::remove(int data)
{
    int h=hash(data);
    int n=h;
    while(hmap[n]!=-1)
    {
        if(hmap[n]==data)
        {
            hmap[n]=-2;
            return true;
        }
        n=(n+1)%size;
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

int main()
{
    int n;
    cout<< "enter map size: ";
    cin>> n;
    maps map1=maps(n);
    int z;
    cout<< "#Number of queries must be less than or equal to map size as per linear probing algorithm\n";
    cout<< "enter number of queries: ";
    cin>> z;
    cout<< "enter data: ";
    for(;z!=0;z--)
    {
        int data;
        cin>> data;
        if(!map1.insert(data))
        cout<< "Insertion can't be done\n";
    }
    map1.display();
    cout<< map1.capacity;
    return 0;
}