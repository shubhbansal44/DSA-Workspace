#include<bits/stdc++.h>
using namespace std;

void intersection(const vector<int> &nums1,const vector<int> &nums2)
{
    unordered_set<int> space;
    for(auto x: nums1){
        space.insert(x);
    }
    cout<< "intersection b/w two arrays are: ";
    for( int i=0; i<nums2.size(); i++){
        if(space.count(nums2[i])){
            cout<< nums2[i]<< " ";
        }
    }
}

int main()
{
    int n;
    cout<< "enter size: ";
    cin>> n;
    cout<< "enter nums1 data: ";
    vector<int> nums1(n);
    for(auto &x: nums1)
    cin>> x;
    int m;
    cout<< "enter size: ";
    cin>> m;
    cout<< "enter nums2 data: ";
    vector<int> nums2(m);
    for(auto &x: nums2)
    cin>> x;
    intersection(nums1,nums2);
    return 0;
}