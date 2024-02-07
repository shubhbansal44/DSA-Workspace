#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int nthfib(int n)
{
    if(n<=1)
    {
        return n;
    }
    return nthfib(n-1)+nthfib(n-2);
}
int main()
{
    int n;
    cin>> n;
    cout<< nthfib(n);
    return 0;
}