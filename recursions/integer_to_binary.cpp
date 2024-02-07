#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

int f(int d)
{
    if(d==0)
    {
        return 0;
    }
    cout<< d%2;
    f(d/2);
}
int main()
{
    int n;
    cout<< "Enter a Number: ";
    cin>> n;
    cout<< "Binary Equivalent Of "<< n<< " is ";
    f(n);
    return 0;
}   