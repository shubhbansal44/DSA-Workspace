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
    if(t!=0){swap(vect[0],vect[t]);}
    t=hoare_partition(vect,0,n-1);
    puts("output array after partition: ");
    for(auto p: vect)
    {cout<< p<< " ";}
    cout<< "\nindex from which partition occurs: "<< t;
    return 0;
}