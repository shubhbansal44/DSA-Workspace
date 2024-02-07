#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;
int main()
{
    l1:
    int n;
    cout<< "Enter number of elements: ";
    cin>> n;
    vector<int> vect(n);
    cout<< "unsorted Input array: ";
    for(auto &p: vect)
    {cin>> p;}
    int x=n-1;
    bool check=false;
    for(int i=0; i<x; i++)
    {
        if(vect[i]>vect[i+1])
        {swap(vect[i],vect[i+1]);check=true;}
        if(i==x-1)
        {x--;i=-1;if(check==false){puts("Array is already sorted!!\n*******Enter again*******");goto l1;}}
    }
    puts("sorted output array: ");
    for(auto p: vect)
    {cout<< p<< " ";}
    return 0;
}