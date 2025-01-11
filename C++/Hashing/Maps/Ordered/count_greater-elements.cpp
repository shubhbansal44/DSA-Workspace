#include<bits/stdc++.h>
using namespace std;

void cntgrt(const vector<int> &nums)
{
    map<int,int> space;
    for(auto x: nums){
        space[x]++;
    }
    int k=0;
    for(auto it=space.rbegin(); it!=space.rend(); it++) {
        int c=it->second;
        it->second=k;
        k+=c;
    }
    for(auto x: nums){
        cout<< space[x]<< " ";
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
    cin>> x;
    cout<< "output: ";
    cntgrt(nums);
    return 0;
}