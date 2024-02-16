#include<bits/stdc++.h>
using namespace std;

int find_zeros(const vector<int> &nums)
{
    int a=0,b=nums.size()-1,c=-1,d=1;
    for(int i=a; i<=b; i++)
    {
        if(nums[i]==1&&c==-1)
        {a=i;c=0;}
        if(nums[b-i]==1&&d)
        {b=b-i-1;d=0;i=a;}
        if(nums[i]==0&&c!=-1&&d!=1)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n;
    cout<< "Enter number of elements: ";
    cin>> n;
    vector<int> vect(n);
    cout<< "Enter Elements: ";
    for(auto &p: vect)
    {
        cin>> p;
    }
    int k=find_zeros(vect);
    cout<< "Total number of zeros: "<< k;
    return 0;
}