#include<bits/stdc++.h>
using namespace std;

void transpose(const vector<vector<int>> &origin,vector<vector<int>> &aftermath,int r,int c)
{
    for(int i=0; i<r*c; i++)
    {
        int r1=i/c,c1=i%c;
        aftermath[c1][r1]=origin[r1][c1];
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
    transpose(mat,ans,r,c);
    cout<< "Transposed of a given matrix is: \n";
    for(int i=0; i<r*c; i++)
    {
        int r1=i/r,c1=i%r;
        if(i%r==0&&i!=0)
        {cout<< "\n";}
        cout<< ans[r1][c1]<< " ";
    }
    return 0;
}