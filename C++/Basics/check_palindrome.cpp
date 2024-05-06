#include<iostream>
using namespace std;

int main()
{
    unsigned long long int n,c,r=0,b;
    cout<< "Enter Number:\n";
    cin>> n;
    c=n;
    while(n>0)
    {
        b=n%10;
        n=n/10;
        r=r*10+b;
    }
    switch(r==c){
        case 0:
        cout<< c<<" is not a palindrome";
        break;
        case 1:
        cout<< c<<" is a palindrome";
        break;
    }
    return 0;
}