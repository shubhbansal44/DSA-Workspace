#include<bits/stdc++.h>
using namespace std;

int maxdistinct(const vector<int> &nums)
{
    int k;
    cout<< "enter no. of subsets: ";
    cin>> k;
    unordered_set<int> space;
    for(auto x: nums){
        space.insert(x);
    }
    int d=space.size(),n=nums.size();
    if(n/k<=d) return n/k;
    return d;
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
    cout<< maxdistinct(nums);
    return 0;
}