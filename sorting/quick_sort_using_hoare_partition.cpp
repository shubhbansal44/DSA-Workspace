#include<bits/stdc++.h>
using namespace std;

int hoare_partition(vector<int> &nums,int l,int h)
{
    int i=l-1,j=h+1,p=nums[l];
    while(true)
    {
        do{i++;}while(nums[i]<p);
        do{j--;}while(nums[j]>p);
        if(i>=j){return j;}
        swap(nums[i],nums[j]);
    }
}

void quick_sort(vector<int> &nums,int l,int h)
{
    if(l<h)
    {
        int p=hoare_partition(nums,l,h);
        quick_sort(nums,l,p);
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