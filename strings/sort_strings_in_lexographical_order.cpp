#include<bits/stdc++.h>
using namespace std;

void lexographical_order(vector<string> &dictionary)
{
    int k=0,i=1,n=dictionary.size();
    while(i<n)
    {
        while(k<dictionary[i].size() && k<dictionary[i-1].size())
        {
            if(dictionary[i][k]>dictionary[i-1][k]){break;}
            if(dictionary[i][k]<dictionary[i-1][k]){swap(dictionary[i],dictionary[i-1]);break;}
            k++;
        }
        if(i==n-1)
        {i=-1;n--;}
        i++;k=0;
    }
}

int main()
{
    int n;
    cout<< "specify number of strings: ";
    cin>> n;
    cout<< "enter strings: ";
    vector<string> dictionary(n);
    for(auto &p: dictionary)
    {cin>> p;}
    lexographical_order(dictionary);
    cout<< "sorted strings: ";
    for(auto p: dictionary)
    {cout<< p<< " ";}
    return 0;
}