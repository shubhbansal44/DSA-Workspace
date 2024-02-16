#include<iostream>
using namespace std;

int reverse(int s)
{
    int r,sum=0;
    while(s!=0)
    {
        r=s%10;
        sum=sum*10+r;
        s=s/10;
    }
    return sum;
}
int prime(int d)
{
    int count=0;
    for(int i=1; i<=d; i++)
    {
        if(d%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    l1:
    int n,x;
    cout<< "Enter a Number: ";
    cin>> n;
    x= prime(n);
    if(x)
    {
        n= reverse(n);
        x= prime(n);
        if(x)
        {
            cout<< "YES!! "<< reverse(n)<< " is a twisted prime number\n";
            goto l1;
        }
        else
        {
            cout<< "NO!! "<< reverse(n)<< " is not a twisted prime number\n";
            goto l1;
        }
    }
    else
    {
        cout<< "INVALID NUMBER, Enter a prime number\n";
        goto l1;
    }
    return 0;
}
