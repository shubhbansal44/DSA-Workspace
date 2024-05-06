#include<bits/stdc++.h>
using namespace std;

class sets
{
    public:
    set<int> set;
    void sinsert(int data);
    int sceiling(int data);
    void sclear();
};

void sets::sclear()
{
    set.clear();
}

void sets::sinsert(int data)
{
    set.insert(data);
}

int sets::sceiling(int data)
{
    auto it=set.lower_bound(data);
    if(it==set.end())
    {
        return -1;
    }
    return *it;
}

int main()
{
    sets space;
    int n;
    cin>> n;
    vector<int> vect(n);
    for(auto &x: vect)
    cin>> x;
    for(auto x: vect)
    cout<< x<< " ";
    for(int i=0; i<vect.size(); i++)
    {
        int x=i+1;
        while(x!=vect.size())
        {
            space.sinsert(vect[x++]);
        }
        vect[i]=space.sceiling(vect[i]);
        space.sclear();
    }
    for(auto x: vect)
    cout<< x<< " ";
    return 0;
}