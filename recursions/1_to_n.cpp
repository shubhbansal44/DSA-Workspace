#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

int f(int d)
{
    if(d<=0)
    {
        return 1;
    }
    f(d-1);
    cout<< d<< " ";
    // f(d-1);
}
int main()
{
    int n;
    cin>> n;
    f(n);
    return 0;
}   