#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n;
    cout<< "Enter The Number of Elements: ";
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
    int largest1=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>largest1)
        {
            largest1=arr[i];   
        }
    }
    cout<< "Largest element In an Given array is: "<<largest1;
    return 0;
}