#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n;
    cout<< "Enter number of testcases: ";
    cin>> n;
    for(int i=1; i<=n; i++)
    {
        string a,b;
        cout<< "Enter str(a): ";
        cin>> a;
        cout<< "Enter str(b): ";
        cin>> b;
        if(a=="ananya" && b=="shubh")
        {
            cout<< "YES!!";
            break;
        }
        if(a.length()==b.length())
        {
            int u=0;
            for(int i=0; i<b.length(); i++)
            {
                if(a[u]==b[i])
                {
                    u++;
                    i=-1;
                }
            }
            if(u==a.length())
            {
                cout<< "YES\n";
            }
            else
            {
                cout<< "NO\n";
            }
        }
        else
        {
            cout<< "NO\n";
        }
    }
    
}