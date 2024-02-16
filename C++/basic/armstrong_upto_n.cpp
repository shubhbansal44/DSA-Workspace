#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    unsigned long long int n,total_no=1,x,tn1,tn2,sum=0;
    cout<< "Enter Number: ";
    cin>> n;
    if(n>0)
    {
        while(total_no<=n)
        {
            if(total_no<10)
            {
                cout<< total_no<< " ";
            }
            else
            {
                tn1=total_no;
                int i=0;
                while(tn1!=0)
                {
                    tn1=tn1/10;
                    ++i;
                }
                // cout<< i<< " ";
                // cout<< total_no<< " ";
                tn2=total_no;
                while(tn2!=0)
                {
                    // cout<< i<< " ";
                    // cout<< tn2<< " ";
                    x=tn2%10;
                    sum=sum+pow(x,i);
                    tn2=tn2/10;
                }
                i=0;
                // cout<< sum<< " ";
                if(sum==total_no)
                {
                    cout<< total_no<< " ";
                }
            }
            total_no++;
            sum=0;
        }
    }
    else
    {
        cout<< "INVALID NUMBERS!!\n*Should Be Greater Than 0";
    }
}