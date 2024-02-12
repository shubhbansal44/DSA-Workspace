#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r1,c1,r2,c2;
    cin>> r1>> c1>> r2>> c2;
    if(c1!=r2)
    {
        cout<< "no";
    }
    vector<vector<int>> matA(r1,vector<int> (c1));vector<vector<int>> matB(r2,vector<int> (c2));
    cout<< "Enter matA\n";
    for(int i=0; i<r1*c1; i++)
    {
        int r=i/c1,c=i%c1;
        cin>> matA[r][c];
    }
    cout<< "Enter matB\n";
    for(int i=0; i<r2*c2; i++)
    {
        int r=i/c2,c=i%c2;
        cin>> matB[r][c];
    }
    vector<vector<int>> ans(r1,vector<int> (c2));
    for(int i=0; i<r1*c2; i++)
    {
        int r=i/c2;
        int c=i%c2;
        for(int j=0; j<r2; j++)
        {
            ans[r][c]=ans[r][c]+(matA[r][j]*matB[j][c]);
        }
    }
    cout<< "Resultant Array\n";
    for(int i=0; i<r1*c2; i++)
    {
        int r=i/c2;
        int c=i%c2;
        if(i%c2==0&&i!=0)
        {
            cout<< "\n";
        }
        cout<< ans[r][c]<< " ";
    }
    return 0;
}