#include<bits/stdc++.h>
using namespace std;

// floor returns data if present else next largest smaller number to data,if data is smallest in set then INT_MIN;
// ceiling returns data if present else next smallest largest number to data,if data is largest in set then INT_MAX;
// lower bound returns iterator to data if present else next smallest largest number to data;

class sets
{
    public:
    set<int> set;
    void sinsert(int data);
    int sfloor(int data);
    int sceiling(int data);
};

void sets::sinsert(int data)
{
    set.insert(data);
}

int sets::sfloor(int data)
{
    auto it=set.lower_bound(data);
    if(it==set.begin())
    {
        if(*it==data)
        return *it;
        return INT_MIN;
    }
    if(it!=set.end()&&*it==data)
    return *it;
    it--;
    return *it;
}

int sets::sceiling(int data)
{
    auto it=set.lower_bound(data);
    if(it==set.end())
    {
        return INT_MAX;
    }
    return *it;
}

int main()
{
    sets set1;
    set1.sinsert(1);
    set1.sinsert(2);
    set1.sinsert(3);
    set1.sinsert(4);
    set1.sinsert(5);
    set1.sinsert(6);
    set1.sinsert(7);
    set1.sinsert(8);
    set1.sinsert(9);
    cout<< set1.sceiling(10);
    return 0;
}