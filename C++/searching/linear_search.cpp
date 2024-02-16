#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int search(int arr[],int target,int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==target)
        return i;
    }
    return -1;
}
int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int &x:arr)
    {
        cin>> x;
    }
    int target;
    cin>> target;
    cout<< search(arr,target,n);
    return 0;
}