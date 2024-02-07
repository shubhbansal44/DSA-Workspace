#include<bits/stdc++.h>
using namespace std;

void merge_sort(vector<int> &nums,int s,int m,int l)
{
    vector<int> temp=nums;
    int i=s,j=m,k=s;
    while(i<m&&j<l)
    {
        if(temp[i]<=temp[j]){nums[k]=temp[i];i++;k++;}
        else{nums[k]=temp[j];j++;k++;}
    }
    while(i<m){nums[k]=temp[i];k++;i++;}
    while(j<l){nums[k]=temp[j];k++;j++;}
    return;
}

void sortvect(vector<int> &nums,int s,int l)
{
    if(l>s)
    {
        int m=s+(l-s)/2;
        sortvect(nums,s,m);
        sortvect(nums,m+1,l);
        merge_sort(nums,s,m+1,l+1);
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
    sortvect(vect,0,n-1);
    puts("sorted output array: ");
    for(auto p: vect)
    {cout<< p<< " ";}
    return 0;
}