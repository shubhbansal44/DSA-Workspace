#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

int superdigit(string n,int k)
{
    int n1=stoi(n);
    if(n1<10)
    {
        return n1;
        if(n1*k<10)
        return n1*k;
        return superdigit(to_string(n1*k),1);
    }
    static int s=0;
    s=n1%10+superdigit(to_string(n1/10),1);
    return superdigit(to_string(s*k),1);
}
int main()
{
    string n;int k;
    cin>> n>>k;
    cout<< superdigit(n,k);
    return 0;
}