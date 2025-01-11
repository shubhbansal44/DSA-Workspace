#include<bits/stdc++.h>
using namespace std;

bool pairsum(const vector<int> &nums)
{
    int k;
    cout<< "enter sum: ";
    cin>> k;
    unordered_set<int> space;
    for(int i=0; i<nums.size(); i++){
        if(space.count(k-nums[i])){
            return true;
        } 
        else space.insert(nums[i]);
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
    cout<< pairsum(nums);
    return 0;
}