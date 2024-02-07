#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int k=3;
    int arr[]={1,3,-1,-3,5,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int u=0,max=arr[u],l=0;
    for(int i=1; i<n; i++)
    {
        if(max<arr[i])
        {
            l++;
            max=arr[i];
        }
        else
        {
            l++;
        }
        if(l%(k-1)==0)
        {
            cout<< max<< " ";
            max=arr[++u];
            i=u;
        }
    }
    return 0;
}
// output will be n-k+1