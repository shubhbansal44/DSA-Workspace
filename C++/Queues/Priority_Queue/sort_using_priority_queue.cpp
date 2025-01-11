#include<bits/stdc++.h>
using namespace std;

void sort(vector<int> &nums)
{
    priority_queue<int,vector<int>,greater<int>> space(nums.begin(),nums.end());
    int n=nums.size();nums.clear();
    while(n--)
    {
        nums.push_back(space.top());
        space.pop();
    }
}

int main()
{
    int n;
    cout<< "enter size: ";
    cin>> n;
    vector<int> nums(n);
    cout<< "enter data: ";
    for(auto &x: nums)
    {
        cin>> x;
    }
    sort(nums);
    cout<< "sorted data: ";
    for(auto x: nums)
    {
        cout<< x<< " ";
    }
    return 0;
}