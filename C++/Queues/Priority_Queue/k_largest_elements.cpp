#include<bits/stdc++.h>
using namespace std;

void klare(const vector<int> &nums)
{
    int k;
    cout<< "enter k: ";
    cin>> k;
    priority_queue<int,vector<int>,greater<int>> space(nums.begin(),nums.begin()+k);
    int n=nums.size();
    while(k<n)
    {
        if(nums[k]>space.top())
        {
            space.pop();
            space.push(nums[k]);
        }
        k++;
    }
    cout<< "K largest elements: ";
    while(!space.empty())
    {
        cout<< space.top()<< " ";
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
    klare(nums);
    return 0;
}