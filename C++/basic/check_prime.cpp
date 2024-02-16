#include<iostream>
using namespace std;

int main()
{
    int n,v=0,i;
    cout<< "Enter Number: ";
    cin>> n;
    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            v++;
        }
    }
    if(v==1)
    {
        cout<< n<< " Is A Prime";
    }
    else
    {
        cout<< n<< " Is Not A Prime";
    }
    return 0;
}       