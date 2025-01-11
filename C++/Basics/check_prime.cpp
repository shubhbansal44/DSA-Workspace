#include<iostream>
using namespace std;

int is_prime(int n) {
    if(n < 2) return 0;
    int k = 0;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) k++;
    }
    if(!k) return 1;
    return 0;
}

int main()
{
    int n;
    cout<< "Enter number: ";
    cin>> n;
    if(is_prime(n)) {
        cout<< n<< " is prime\n";
    } else {
        cout<< n<< " is not prime\n";
    }
}       