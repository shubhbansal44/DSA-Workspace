#include<bits/stdc++.h>
using namespace std;

int lomuto_partition(vector<int> &nums,int l,int h)
{
    int w=l-1;
    for(int i=l; i<h; i++)
    {
        if(nums[i]<nums[h]){w++;swap(nums[w],nums[i]);}
    }
    swap(nums[w+1],nums[h]);
    return w+1;
}

void quick_sort(vector<int> &nums,int l,int h)
{
    if(l<h)
    {
        int p=lomuto_partition(nums,l,h);
        quick_sort(nums,l,p-1);
        quick_sort(nums,p+1,h);
    }
}

int sort_check(const vector<int> &nums,int n)
{
    if(n==1||n==0)
    return 0;
    if(nums[n-1]<nums[n-2])
    return 1;
    sort_check(nums,n-1);
}

int main()
{
    l1:
    int n;
    cout<< "Enter number of elements: ";
    cin>> n;
    vector<int> vect(n);
    cout<< "Input array: ";
    for(auto &p: vect)
    {cin>> p;}
    if(sort_check(vect,n)==0){puts("Array is already sorted!!\n*******Enter again*******");goto l1;}
    quick_sort(vect,0,n-1);
    puts("sorted output array: ");
    for(auto p: vect)
    {cout<< p<< " ";}
    return 0;
}