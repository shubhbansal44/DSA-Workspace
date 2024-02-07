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
    for(int i=1; i<n; i++)
    {
        int k=vect[i],j=i-1;
        while(j>=0 && vect[j]>k)
        {vect[j+1]=vect[j];j--;}
        vect[j+1]=k;
        // vect.insert(vect.begin()+j+1,k);
        // vect.erase(vect.begin()+i+1);
    }
    puts("sorted output array: ");
    for(auto p: vect)
    {cout<< p<< " ";}
    return 0;
}