#include<bits/stdc++.h>
using namespace std;

int lomuto_partition(vector<int> &nums,int l,int h)
{
    int w=-1;
    for(int i=l; i<h; i++)
    {
        if(nums[i]<nums[h]){w++;swap(nums[w],nums[i]);}
    }
    swap(nums[w+1],nums[h]);
    return w+1;
}

int main()
{
    int n;
    cout<< "Enter number of elements: ";
    cin>> n;
    vector<int> vect(n);
    cout<< "Input array: ";
    for(auto &p: vect)
    {cin>> p;}
    int t;
    cout<< "Enter index around which partition to be executed: ";
    cin>> t;
    if(t!=n-1){swap(vect[n-1],vect[t]);}
    t=lomuto_partition(vect,0,n-1);
    puts("output array after partition: ");
    for(auto p: vect)
    {cout<< p<< " ";}
    cout<< "\nNew index after partition: "<< t;
    return 0;
}