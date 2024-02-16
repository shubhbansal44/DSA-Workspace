#include<bits/stdc++.h>
using namespace std;

int search(const vector<int> &vect,int t,int s,int l)
{
    if(s<=l)
    {
        int m=(l+s)/2;
        if(vect[m]==t)
        {return m;}
        else if(vect[m]<t)
        {return search(vect,t,m+1,l);}
        else
        {return search(vect,t,s,m-1);}
    }
    return -1;
}
int main()
{
    l1:
    int n;
    cout<< "Enter number of elements: ";
    cin>> n;
    vector<int> vect(n);
    cout<< "Enter Elements: ";
    for(auto &p: vect)
    {
        cin>> p;
    }
    for(int i=1; i<n; i++)
    {if(vect[i]<vect[i-1]||vect[i]==vect[i-1]){cout<< "Target can not be searched!!\n********Enter again********\n";goto l1;}}
    int t;
    cout<< "Enter target: ";
    cin>> t;
    int a=search(vect,t,0,vect.size()-1);
    if(a!=-1)
    cout<< t<< " is found at index "<< a<< "\n";
    else
    cout<< t<< " is unavailable in database!!\n";
    return 0;
}
