#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,x,i=0,n1;
    cout<< "Enter Number: ";
    cin>> n;
    n1=n;
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        if(x!=0&&n1%x==0)
        {
            i++;
        }
    }
    // cout<< i;
    if(i>=2)
    {
        cout<< "Yes!! Given Number Satisfy The Condition";
    }
    else
    {
        cout<< "NO!! Given Number Does Not Satisfy The Condition";
    }
    return 0;
}