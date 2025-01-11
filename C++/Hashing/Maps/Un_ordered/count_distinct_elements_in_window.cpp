#include<bits/stdc++.h>
using namespace std;

void cntdistinct(const vector<int> &nums)
{
    int k;
    cout<< "enter window size: ";
    cin>> k;
    unordered_map<int,int> space;
    for(int i=0; i<k; i++){
        space[nums[i]]++;
    }
    cout<< "distinct elements in each window: "; 
    cout<< space.size()<< " ";
    for(int i=k; i<nums.size(); i++){
        space[nums[i-k]]--;
        if(!space[nums[i-k]]){
            space.erase(nums[i-k]);
        }
        space[nums[i]]++;
        cout<< space.size()<< " ";
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
    cntdistinct(nums);
    return 0;
}