#include<bits/stdc++.h>
using namespace std;

void next_great(const vector<int> &nums,vector<int> &nxgr)
{
    nxgr.push_back(-1);
    stack<int> space;
    space.push(nums[nums.size()-1]);
    for(int i=nums.size()-2; i>=0; i--)
    {
        while(!(space.empty())&&space.top()<=nums[i])
            space.pop();
        if(!(space.empty()))
        nxgr.push_back(space.top());
        else
        nxgr.push_back(-1);
        space.push(nums[i]);
    }
    reverse(nxgr.begin(),nxgr.end());
}

int main()
{
    int n;
    cout<< "enter size: ";
    cin>> n;
    vector<int> nums(n);
    cout<< "enter data: ";
    for(int i=0; i<n; i++)
    {
        cin>> nums[i];
    }
    vector<int> nxgr;
    next_great(nums,nxgr);
    cout<< "next greater element: ";
    for(auto x: nxgr)
    cout<< x<< " ";
    return 0;
}