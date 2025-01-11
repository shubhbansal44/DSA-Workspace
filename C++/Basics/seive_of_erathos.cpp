#include<bits/stdc++.h>
using namespace std;

void prt_prime(int n)
{
    vector<bool> is_prime(n+1,true);
    is_prime[0]=is_prime[1]=false;
    for(int i=2; i<n; i++)
    {
        if(is_prime[i])
        {
            for(int j=i; j<n; j+=i)
            is_prime[j]=false;
            cout<< i<< " ";
        }
    }
}

int main()
{
    int n;
    cin>> n;
    prt_prime(n);
    return 0;
}