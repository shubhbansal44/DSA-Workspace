#include<iostream>
using namespace std;
int s(int n)
{
    if(n<10)
    return n;
    return n%10+s(n/10);
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a=s(n);
    while(a>9)
    a=s(a);
    cout<< a*k;
}