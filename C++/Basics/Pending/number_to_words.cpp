#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    l1:
    string first_twenty[21]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Tweleve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen","Twenty"};
    string tens_multiples[9]={"Thirty","Forty","Fifty","Sixty","Seventy","Eighty","ninety","Hundred","Thousand"};
    char sign[2]={'-','+'};
    double n;
    cout<< "Enter The Number: ";
    cin>> n;
    if(n>-1001&&n<1001)
    {
        int in=n,rem,i;
        cout<< setprecision(10);
        double de=n-in;
        // cout<< in<<"\n"<<de;
        for(int i=0; i)
    }
    else
    {
        cout<< "Invalid Number!!\n";
        goto l1;
    }
}