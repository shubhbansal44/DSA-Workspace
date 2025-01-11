#include<bits/stdc++.h>
using namespace std;

void rev_k(queue<int> &nums)
{
    stack<int> space;
    int k,i=0;
    cout<< "enter k: ";
    cin>> k;
    while((i++)<k)
    {
        space.push(nums.front());
        nums.pop();
    }
    while(!space.empty())
    {
        nums.push(space.top());
        space.pop();
    }
    i=0;
    while((i++)<nums.size()-k)
    {
        nums.push(nums.front());
        nums.pop();
    }
}

void prt_queue(queue<int> nums)
{
    for(int i=0; i<nums.size(); i++)
    {
        cout<< nums.front()<< " ";
        nums.push(nums.front());
        nums.pop();
    }
}

int main()
{
    int n;
    cout<< "enter queue size: ";
    cin>> n;
    queue<int> nums;
    cout<< "enter data: ";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>> x;
        nums.push(x);
    }
    rev_k(nums);
    prt_queue(nums);
    return 0;
}