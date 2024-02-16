#include<iostream>
using namespace std;

int main()
{
    int arr[5]={-8,-6,-9,8,0};
    int first=0,second=0;
    for(int i=0; i<5; i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]<first && arr[i]>second)
        {
            second=arr[i];
        }
    }
    cout<< first<< "\n"<< second;
    return 0;
}