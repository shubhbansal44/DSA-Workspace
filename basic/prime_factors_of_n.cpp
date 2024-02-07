#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,i=2;
    cout<< "Enter Number: ";
    cin>> n;
    if(n>0)
    {
        cout<< "Prime Factors Of "<< n<< " is: ";
        while(n!=0 && i>0)
        {
            if(n%i==0)
            {
                cout<< i;
                n/=i;
                if(n!=1)
                {
                    cout<< '*';
                }
            }
            else
            {
                i++;
            }
        }
    }
    else
    {
        cout<< "INVALID NUMBER!!";
    }
}