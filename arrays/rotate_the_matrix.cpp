#include<bits/stdc++.h>
using namespace std;

void rotate(const vector<vector<int>> &origin,vector<vector<int>> &aftermath,int r,int c)
{
    int a=r-1,b=0;
    for(int i=0; i<r*c; i++)
    {
        int r1=i/r,c1=i%r;
        if(i%r==0&&i!=0)
        {a=r-1;b++;}
        aftermath[r1][c1]=origin[a--][b];
    }
}

int main()
{
    int r,c;
    cout<< "Enter Row: ";
    cin>> r;
    cout<< "Enter column: ";
    cin>> c;
    vector<vector<int>> mat(r,vector<int> (c));
    cout<< "Enter Matrix elements: \n";
    for(int i=0; i<r*c; i++)
    {
        int r1=i/c,c1=i%c;
        cin>> mat[r1][c1];
    }
    vector<vector<int>> ans(c,vector<int> (r));
    rotate(mat,ans,r,c);
    cout<< "Rotated matrix is: \n";
    for(int i=0; i<r*c; i++)
    {
        int r1=i/r,c1=i%r;
        if(i%r==0&&i!=0)
        {cout<< "\n";}
        cout<< ans[r1][c1]<< " ";
    }
    return 0;
}