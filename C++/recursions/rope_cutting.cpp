#include<bits/stdc++.h>
using namespace std;


int max_cuts(int n, const vector<int> &set){
    if(n==0) return 0;
    if(n<0) return -1;
    int ans=max(
    max_cuts(n-set[0], set),
    max_cuts(n-set[1], set);
    max_cuts(n-set[2], set);
    )
}

int main()
{
    int n;
    cout<< "enter rope length: ";
    cin>> n;
    vector<int> valid_lengths(3);
    for(auto &x: valid_lengths){
        cin>> x;
    }
    int ans=max_cuts(n, valid_lengths);
    return 0;
}