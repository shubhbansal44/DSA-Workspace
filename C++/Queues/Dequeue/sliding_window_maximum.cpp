#include<bits/stdc++.h>
using namespace std;

void win_max(const vector<int> &nums,int k)
{
    deque<int> space;
    for(int i=0; i<k; i++)
    {
        while(!space.empty()&&nums[space.back()]<=nums[i])
        {space.pop_back();}
        space.push_back(i);
    }
    for(int i=k; i<nums.size(); i++)
    {
        cout<< nums[space.front()]<< " ";
        while(!space.empty()&&space.front()<=i-k)
        {space.pop_front();}
        while(!space.empty()&&nums[space.back()]<=nums[i])
        {space.pop_back();}
        space.push_back(i);
    }
    cout<< nums[space.front()];
}

int main()
{
    int n;
    cout<< "enter size: ";
    cin>> n;
    vector<int> nums(n);
    cout<< "enter element: ";
    for(int i=0; i<n; i++)
    {
        cin>> nums[i];
    }
    int k;
    cout<< "enter window size: ";
    cin>> k;
    win_max(nums,k);
    return 0;
}