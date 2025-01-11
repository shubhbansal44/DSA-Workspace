#include<bits/stdc++.h>
using namespace std;

int longseq(const vector<int> &nums)
{
    unordered_set<int> space;
    for(auto x: nums){
        space.insert(x);
    }
    int ans=1;
    for(int i=0; i<nums.size(); i++){
        int maximum=1;
        if(!space.count(nums[i]-1)){
            int low=nums[i];
            while(space.count(++low)){
                maximum++;
            }
        }
        ans=max(maximum,ans);
    }
    return ans;
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
    cout<< longseq(nums);
    return 0;
}