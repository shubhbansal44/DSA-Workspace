#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    unsigned long long int n,x,sum=0,i=0;
    cout<< "Enter Any Binary Number: ";
    cin>> n;
    while(n!=0)
    {
        x=n%10;
        // cout<< x;
        n=n/10;
        // cout<< i;
        if(x!=0 && x!=1)
        {
            cout<< "INVALID NUMBER!!";
            return 0;
        }
        else
        {
            sum=(pow(2,i++)*x)+sum;
        }
    }
    cout<< sum;
    return 0;
}