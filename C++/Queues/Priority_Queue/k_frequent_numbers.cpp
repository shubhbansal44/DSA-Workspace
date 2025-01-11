#include<bits/stdc++.h>
using namespace std;

class brain
{
    public:
    bool operator()(pair<int,int> x,pair<int,int> y)
    {
        if(x.second==y.second)
        return x.first>y.first;
        return x.second<y.second;
    }
};

void k_freq(const vector<int> &nums)
{
    int k;
    cout<< "enter k: ";
    cin>> k;
    unordered_map<int,int> vzone;
    for(auto &x: nums)
    {
        vzone[x]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,brain> space(vzone.begin(),vzone.end());
    cout<< "k most frequent elements: ";
    for(int i=0; i<k; i++)
    {
        cout<< space.top().first<< " ";
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
    k_freq(nums);
    return 0;
}