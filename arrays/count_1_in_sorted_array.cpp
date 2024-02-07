#include<bits/stdc++.h>
using namespace std;

int count1(const vector<int> &vect,int s,int l)
{
    int m=(l+s)/2;
    if(s>l)
    return -1;
    if(vect[m]==0)
    {return count1(vect,m+1,l);}
    else if(vect[m-1]!=vect[m])
    return vect.size()-m;
    else{return count1(vect,s,m-1);}
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
    {if(vect[i]<vect[i-1]){cout<< "program can't be executed!!\n********Enter again********\n";goto l1;}}
    int a=count1(vect,0,vect.size()-1);
    if(a!=-1)
    cout<< "Total number of 1 is "<< a;
    else
    cout<< 1<< " is unavailable in database!!";
    return 0;
}