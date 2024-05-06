#include<iostream>
using namespace std;

int factorial(int);
int main()
{
    int n,n1,x,sum=0;
    cout<< "Enter a Number: ";
    cin>> n;
    n1=n;
    while(n!=0)
    {
        x=n%10;
        sum=sum+factorial(x);
        n=n/10;
    }
    if(sum==n1)
    {
        cout<< n1<< " is a Strong Number";
    }
    else
    {
        cout<< n1<< " is not a Strong Number";
    }
    return 0;
}
int factorial(int d)
{
    int sum1=1;
    for(int i=2; i<=d; i++)
    {
        sum1=sum1*i;
    }
    return sum1;
}