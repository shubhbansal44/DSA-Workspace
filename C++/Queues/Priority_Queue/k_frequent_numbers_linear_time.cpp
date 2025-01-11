#include<bits/stdc++.h>
using namespace std;


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
    vector<int> freq[nums.size()+1];
    for(auto x: vzone)
    {
        freq[x.second].push_back(x.first);
    }
    cout<< "k most frequent elements: ";int i=nums.size(),c=0;
    while(i>=0)
    {
        sort(freq[i].begin(),freq[i].end(),greater<int>());
        for(auto x: freq[i])
        {
            cout<< x<< " ";
        }
        cout<< "\n";
        i--;
    }
}

int main()
{
    int n;
    cout<< "enter size: ";
    cin>> n;
    vector<int> nums;
    cout<< "enter data: ";
    for(auto &x: nums)
    {
        cin>> x;
    }
    k_freq(nums);
    return 0;
}