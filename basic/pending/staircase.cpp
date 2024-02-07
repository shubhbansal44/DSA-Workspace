#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int p=n-1,r=n,u=1;
    for(int i=1; i<=n; i++)
    {
        if(p!=0)
        {
            cout<< " ";
            i--;
            r--;
            p--;
        }
        else
        {
            if(r!=0)
            {
                i--;
                cout<< r;
                r--;
            }
            if(r==0)
            {
                i++;
                u++;
                r=n;
                cout<< "\n";
                p=n-u;
            }
        }
    }
    return 0;
}