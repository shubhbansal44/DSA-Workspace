#include<bits/stdc++.h>
using namespace std;

int distinct_count(const vector<int> &nums)
{
    unordered_set<int> space(nums.begin(),nums.end());
    return space.size();
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
    cout<< distinct_count(nums);
    return 0;
}