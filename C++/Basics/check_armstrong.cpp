#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,n1,no_of_digits=0,d,sum=0,n2;
    cout<<"Enter Number:\n";
    cin>> n;
    n1=n;
    n2=n;
    while(n!=0){
        n/=10;
        no_of_digits++;
    }
    while(n1!=0){
        d=n1%10;
        sum=sum+pow(d,no_of_digits);
        n1/=10;
    }
    if(sum==n2){
         cout<< n2<<" Is A Armstong number";
    }
   
    else{
        cout<< n2<<" Is Not A Armstong Number";
    }
    return 0;
}// here code is correct, some technical issue is happening due to which output is unfavourable.*check in online compiler.