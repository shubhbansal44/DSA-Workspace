#include <iostream>
using namespace std;

int main() {
    int a;
    cout<< "a= ";
    cin>> a;
    int b;
    cout<< "b= ";
    cin>> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"New value  of a is: "<< a <<"\nNew value of b is: "<<b;
    return 0;
}
