#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;


int f(int n, int n1)
{
    if(n%n1==0)
    {
        return n;
    }
    else
    {
        return f();
    } 
}
int main()
{
    int n,n1;
    cout<< "enter the numbers: ";
    cin>> n>> n1;
    if(n<n1)
    {
        cout<< f(n1,n);
    }
    else
    cout<< f(n,n1);
}   