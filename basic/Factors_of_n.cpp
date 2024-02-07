#include<iostream>
#include<math.h>
using namespace std;

int main(){
    unsigned long long int n;
    cout<< "Enter Number: ";
    cin>> n;
    switch(n>0)
    {
        case 1:
        cout<< "Factors of "<< n<< " is ";
        for(int i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                cout<< i<< " ";
            }
        }
        break;
        case 0:
        cout<< "INVALID NUMBER!!\n*Should Be Greater Than 0.";
    }
    
    return 0;
}