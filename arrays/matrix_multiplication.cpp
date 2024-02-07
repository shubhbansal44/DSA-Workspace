#include<iostream>
#include<math.h>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int r1,c1,r2,c2;
    cin>> r1>> c1>> r2>> c2;
    if(c1!=r2)
    {
        cout<< "no";
    }
    int matA[r1][c1],matB[r2][c2];
    cout<< "enter matA\n";
    for(int i=0; i<r1*c1; i++)
    {
        int r=i/c1,c=i%c1;
        cin>> matA[r][c];
    }
    cout<< "enter matB\n";
    for(int i=0; i<r2*c2; i++)
    {
        int r=i/c2,c=i%c2;
        cin>> matB[r][c];
    }
    int ans[r1][c2]={};
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
        if(i%c2==0)
        {
            cout<< "\n";
        }
        cout<< ans[r][c]<< " ";
    }
    return 0;
}