#include<bits/stdc++.h>
using namespace std;

bool zsum(const vector<int> &nums)
{
    unordered_set<int> space;
    int k=0;
    for(int i=0; i<nums.size(); i++){
        k+=nums[i];
        if(space.count(k)||k==0) return true;
        space.insert(k);
    }
    return false;
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
    cout<< zsum(nums);
    return 0;
}