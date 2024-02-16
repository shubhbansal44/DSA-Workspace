#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

int fib(int n, int f, int s)
{
    if(n==0)
    return 1;
    cout<< f<< " ";
    return fib(n-1,s,f+s);
}
int main()
{
    int n;
    cin>> n;
    fib(n,0,1);
}