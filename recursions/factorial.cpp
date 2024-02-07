#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;


unsigned long long int f(int d)
{
    if(d<=1)
    {
        return 1;
    }
    else
    {
        return d*f(d-1);
    }
}
int main()
{
    li:
    int n;
    cout<< "Enter a number: ";
    cin>> n;
    if(n<66 && n>=0)
    cout<< "Factorial Of "<< n<< " is "<< f(n)<< "\n";
    else
    cout<< "Invalid Number!!"<< "\n";
    goto li;
    return 0;
}