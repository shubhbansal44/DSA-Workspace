#include<bits/stdc++.h>
using namespace std;

int sqt(int x)
{
    int s=1,h=x,m,ans=0;
    while(s<=h)
    {
        m=(h+s)/2;
        int k=m*m;
        if(k==x)
        {return m;}
        else if(k>x)
        {h=m-1;}
        else
        {s=m+1;ans=m;}
    }
    return ans;
}
int main()
{
    int x;
    cin>> x;
    cout<< sqt(x);
    return 0;
}