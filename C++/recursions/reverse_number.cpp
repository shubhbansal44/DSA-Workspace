#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int reverse(int n)
{
    if(n==0)
    return n;
    static int sum=0;
    sum=sum*10+n%10;
    reverse(n/10);
    return sum;
}
int main()
{
    int n;
    cin>> n;
    cout<< reverse(n);
    return 0;
}