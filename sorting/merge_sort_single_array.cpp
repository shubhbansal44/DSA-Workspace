#include<bits/stdc++.h>
using namespace std;

void merge_sort(const vector<int> &nums,vector<int> &soln,int m)
{
    int i=0,j=m,k=0;
    while(i<m&&j<nums.size())
    {
        if(nums[i]<=nums[j]){soln[k]=nums[i];i++;k++;}
        else{soln[k]=nums[j];j++;k++;}
    }
    while(i<m){soln[k]=nums[i];k++;i++;}
    while(j<nums.size()){soln[k]=nums[j];k++;j++;}
    return;
}

int sort_check(const vector<int> &vect,int m)
{
    for(int i=m+1; i<vect.size(); i++)
    {if(vect[i]<vect[i-1]){return 0;}}
    return 1;
}

int mid_check(const vector<int> &vect)
{
    for(int i=1; i<vect.size(); i++)
    {if(vect[i]<vect[i-1]){return i;}}
    return -1;
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
    int m=mid_check(vect);
    if(m==-1){puts("Array is already sorted!!");goto l1;}
    if(sort_check(vect,m)==0){cout<< "input sorted array only!!\n*******Enter again*******\n";goto l1;}
    vector<int> soln(n);
    merge_sort(vect,soln,m);
    puts("sorted output array: ");
    for(auto p: soln)
    {cout<< p<< " ";}
    return 0;
}