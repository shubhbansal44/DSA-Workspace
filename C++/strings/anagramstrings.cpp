#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

string is_anagram(string a,string b)
{
    if(a.length()!=b.length())
    return "NO! given strings are not anagram";
    int freq_x[26]={0},freq_y[26]={0};
    for(int i=0; i<a.length(); i++)
    {
        int x=a[i]-'a',y=b[i]-'a';
        freq_x[x]++;
        freq_y[y]++;
    }
    for(int i=0; i<26; i++)
    {
        if(freq_x[i]!=freq_y[i])
        return "NO! given strings are not anagram";
    }
    return "YES! given strings are anagram";
}

int main()
{
    int n;
    cout<< "Enter number of testcases: ";
    cin>> n;
    for(int i=1; i<=n; i++)
    {
        string a,b;
        cout<< "Enter str(a): ";
        cin>> a;
        cout<< "Enter str(b): ";
        cin>> b;
        cout<< is_anagram(a,b);
    }      
}