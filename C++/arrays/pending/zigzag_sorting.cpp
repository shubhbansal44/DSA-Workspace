#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n;
    cout<< "Enter The Number Of Elements: ";
    cin>> n;
    int arr[n];
    for(int &x: arr)
    {
        static int i=1;
        cout<< "Enter The "<< i<< " Element: ";
        cin>> x;
        i++;
    }
    cout<< "Your Array is: [";
    for(int i=0; i<n; i++)
    {
        cout<< arr[i];
        if(i<n-1)
        {
            cout<< ",";
        }
        else if(i==n-1)
        {
            cout<< "]\n";
        }
    }
    int c=0;
    int g=0;
    for(int i=0; i<n-1; i++)
    {
        c++;
        if(arr[i]>arr[i+1])
        {
            int s= arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=s;
            i=-1;
        }
        if(c==pow(n,2)||c==n-1)
        {
            i=1;
            g=1;
        }
        if(g)
        {
            if(arr[i]<arr[i+1])
            {
                int f= arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=f;
                i++;
            }
        }

    }
    cout<< "Your Sorted Array is: [";
    for(int i=0; i<n; i++)
    {
        cout<< arr[i];
        if(i<n-1)
        {
            cout<< ",";
        }
        else if(i==n-1)
        {
            cout<< "]\n";
        }
    }
    cout<< c;
    return 0;
}   