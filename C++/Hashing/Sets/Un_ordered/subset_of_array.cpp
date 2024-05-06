#include<bits/stdc++.h>
using namespace std;

bool is_subset(const vector<int> &origin,const vector<int> &child)
{
    unordered_set<int> space(origin.begin(),origin.end());
    for(int i=0; i<child.size(); i++)
    {
        if(!space.count(child[i]))
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