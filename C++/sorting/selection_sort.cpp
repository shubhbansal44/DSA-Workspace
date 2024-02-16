#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<< "Enter number of elements: ";
    cin>> n;
    vector<int> vect(n);
    cout<< "unsorted Input array: ";
    for(auto &p: vect)
    {cin>> p;}
    int min;
    for(int i=0; i<n-1; i++)
    {
        min=i;
        for(int j=i+1; j<n; j++)
        {
            if(vect[j]<vect[min])
            {min=j;}
        }
        if(min!=i)
        swap(vect[min],vect[i]);
    }
    puts("sorted output array: ");
    for(auto p: vect)
    {cout<< p<< " ";}
    return 0;
}