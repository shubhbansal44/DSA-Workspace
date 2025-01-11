#include<bits/stdc++.h>
using namespace std;

void repel(const vector<int> &nums)
{
    unordered_set<int> space;
    for(auto x: nums){
        if(space.count(x))
        cout<< x<< " ";
        else space.insert(x);
    }
}

int main()
{
    int n;
    cout<< "enter size: ";
    cin>> n;
    cout<< "enter nums data: ";
    vector<int> nums(n);
    for(auto &x: nums)
    cin>> x;
    cout<< "repeated elements are: ";
    repel(nums);
    return 0;
}