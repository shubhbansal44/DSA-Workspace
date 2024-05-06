#include<iostream>
using namespace std;

int perfect(int);
int main()
{
    int n,p;
    cout<< "Enter a Number: ";
    cin>> n;
    p=perfect(n);
    if(p==1)
    {
        cout<< "YES!! "<< n<< " is a Perfect Number";
    }
    else
    {
        cout<< "NO!! "<< n<< " is Not a Perfect Number";
    }
    return 0;
}
int perfect(int d)
{
    int sum=1;
    for(int i=2; i<d; i++)
    {
        if(d%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==d)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}