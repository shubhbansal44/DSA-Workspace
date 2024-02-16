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
    // int arr[5]={0,0,1,4,1};
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            arr[i+1]=0;
        }
        if(arr[i]>arr[i+1])
        {
            int s= arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=s;
            i=-1;
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
    return 0;
}