#include<bits/stdc++.h>
using namespace std;

void frequency(const vector<int> &nums)
{
    unordered_map<int,int> space;
    for(auto x: nums)
    space[x]++;
    for(auto it: space)
    cout<< it.first<< " has frequency of "<<it.second<< "\n";
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
    frequency(nums);
    return 0;
}