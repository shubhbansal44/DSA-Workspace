#include<bits/stdc++.h>
using namespace std;

void prev_great(const vector<int> &nums,vector<int> &prgr)
{
    prgr.push_back(-1);
    stack<int> space;
    space.push(nums[0]);
    for(int i=1; i<nums.size(); i++)
    {
        while(!(space.empty())&&space.top()<=nums[i])
            space.pop();
        if(!(space.empty()))
        prgr.push_back(space.top());
        else
        prgr.push_back(-1);
        space.push(nums[i]);
    }
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
    vector<int> prgr;
    prev_great(nums,prgr);
    cout<< "previous greater element: ";
    for(auto x: prgr)
    cout<< x<< " ";
    return 0;
}