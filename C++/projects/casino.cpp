#include<bits/stdc++.h>
using namespace std;
void draw(int,string);
int main()
{
    int amount=400;
    int bidMoney=100,e=2;
    vector<vector<char>> tgrid(3,vector<char>(3));
    tgrid={{'*','^','#'},{'*','^','#'},{'*','^','#'}};
    while(amount>bidMoney&&e--)
    {
        int i=rand()%3;
        int j=rand()%3;
        int k=rand()%3;
        cout<< tgrid[i][i]<< tgrid[j][j]<< tgrid[k][k]<< endl;
    }
    // do{
    //     cout<<"Sorry, not enough money, try again"<<endl;
    // }while(amount<bidMoney)
    // draw(60,"+");
    // return 0;
}

void draw(int num,string symbol){
    for(int i=0;i<num;i++){
        cout<<symbol;
    }
}