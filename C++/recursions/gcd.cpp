#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}

int main()
{
    l1:
    int a,b;
    cout<< "Enter two numbers: ";
    cin>> a>>b;
    int k=gcd(a,b);
    cout<< "GCD of given two numbers is: "<< k<< "\n";
    goto l1;
    return 0;
}