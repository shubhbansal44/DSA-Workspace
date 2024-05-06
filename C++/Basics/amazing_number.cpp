#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n,count=0;
    cout<< "enter a number: ";
    cin>> n;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==3)
    {
        cout<< "amazing number";
    }
    else{
        cout<< "no";
    }
    return 0;
}