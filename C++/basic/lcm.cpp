#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int a,b;
    cout<< "enter two number: ";
    cin>> a>> b;
    for(int i=1; ;i++)
    {
        if(i%a==0 && i%b==0)
        {
            cout<< i;
            break;
        }
    }
    return 0;
}   