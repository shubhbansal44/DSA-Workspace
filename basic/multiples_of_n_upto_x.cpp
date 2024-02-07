#include<iostream>
using namespace std;


int main(){
    int num,x;
    cout<<"Enter Number: ";
    cin>>num;
    cout<< "Specify Number Of Multiples: ";
    cin>> x;
    cout<< "First "<< x<< " Multiples of "<< num<< " are: ";
    for (int i = 1; i < x+1; i++)
    {
        cout<<num*i<<" ";
    }
    return 0;
}