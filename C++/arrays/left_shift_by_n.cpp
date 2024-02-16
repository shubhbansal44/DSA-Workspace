#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int arr[]={2,1,3,2,3,3,};
    int l=sizeof(arr)/sizeof(arr[0]);
    if(n<l&&n!=0)
    {
        while(n)
        {
            int a=arr[n-1];
            for(int i=n; i<l; i++)
            {
                arr[i-1]=arr[i];
                if(i==l-1)
                arr[l-1]=a;
            }
            n--;
        }
    }
    else
    {
        if(n==l||n==0)
        goto l1;
        for(int i=0; i<l; i++)
        {
            arr[i]=0;
        }
    }7
    l1:
    for(int i=0; i<l; i++)
    {
        if(i==0)
        cout<< '[';
        cout<< arr[i];
        if(i<l-1)
        {
            cout<< ",";
        }
        else if(i==l-1)
        {
            cout<< "]\n";
        }
    }
    return 0;
}