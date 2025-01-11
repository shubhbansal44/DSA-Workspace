#include<bits/stdc++.h>
using namespace std;

int max_items(vector<int> &nums,int budget)
{
    priority_queue<int,vector<int>,greater<int>> space(nums.begin(),nums.end());nums.clear();
    int item=0;
    while(!space.empty())
    {
        budget=budget-space.top();
        space.pop();
        if(budget>=0)
            item++;
        else
            return item; 
    }
    return item;
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
    int budget;
    cout<< "enter budget: ";
    cin>> budget;
    int mi=max_items(nums,budget);
    cout<< "max items you can purchase with given budget: "<< mi;
    return 0;
}