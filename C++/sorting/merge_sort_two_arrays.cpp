#include<bits/stdc++.h>
using namespace std;

void merge_sort(const vector<int> &nums1,const vector<int> &nums2,vector<int> &soln,int n,int m)
{
    int i=0,j=0,k=0;
    while(i<n&&j<m)
    {
        if(nums1[i]<=nums2[j]){soln[k]=nums1[i];i++;k++;}
        else{soln[k]=nums2[j];j++;k++;}
    }
    while(i<m){soln[k]=nums1[i];k++;i++;}
    while(j<n){soln[k]=nums2[j];k++;j++;}
    return ;
}

int sort_check(const vector<int> &vect)
{
    for(int i=1; i<vect.size(); i++)
    {if(vect[i]<vect[i-1]){return 0;}}
    return 1;
}

int main()
{
    l1:
    int n;
    cout<< "Enter number of elements in array1: ";
    cin>> n;
    vector<int> vect1(n);
    cout<< "sorted Input array1: ";
    for(auto &p: vect1)
    {cin>> p;}
    if(sort_check(vect1)==0){cout<< "input sorted array only!!\n*******Enter again*******\n";goto l1;}
    l2:
    int m;
    cout<< "Enter number of elements in array2: ";
    cin>> m;
    vector<int> vect2(m);
    cout<< "sorted Input array2: ";
    for(auto &p: vect2)
    {cin>> p;}
    if(sort_check(vect2)==0){cout<< "input sorted array only!!\n*******Enter again*******\n";goto l2;}
    vector<int> soln(m+n);
    merge_sort(vect1,vect2,soln,n,m);
    puts("sorted output array: ");
    for(auto p: soln)
    {cout<< p<< " ";}
    return 0;
}