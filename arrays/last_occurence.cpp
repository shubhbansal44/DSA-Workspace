#include<bits/stdc++.h>
using namespace std;

int lastindex(const vector<int> &vect,int t,int s,int l)
{
    int m=(l+s)/2;
    if(s>l)
    return -1;
    if(vect[m]<t)
    {return lastindex(vect,t,m+1,l);}
    else if(vect[m]>t)
    {return lastindex(vect,t,s,m-1);}
    else if(vect[m+1]!=vect[m])
    return m;
    else{return lastindex(vect,t,m+1,l);}
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
    {if(vect[i]<vect[i-1]){cout<< "Target can not be searched!!\n********Enter again********\n";goto l1;}}
    int t;
    cout<< "Enter target: ";
    cin>> t;
    int a=lastindex(vect,t,0,vect.size()-1);
    if(a!=-1)
    cout<< "last occurence of "<< t<< " is at index "<< a;
    else
    cout<< t<< " is unavailable in database!!";
    return 0;
}