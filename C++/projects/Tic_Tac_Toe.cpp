#include<bits/stdc++.h>
using namespace std;

string game_check(const vector<vector<char>> &tgrid,char &player1,char &player2)
{
    
}

void input(vector<vector<char>> &tgrid,char &player,char symbol)
{
    int z=player-'0';
    int m,n;
    if 
}

int main()
{
    vector<vector<char>> tgrid(3,vector<char> (3));
    string a,b;
    int player1,player2;
    int winner=-1,loser=-1;
    cout<< "Welcome To Tic-Tac-Toe\n\n";
    cout<< "#Follow NumPad as Tic-Tac-Toe Grid.\n#Player 1 Is Dot(o)\n#Player 2 Is Cross(X)\n\n";
    cout<< "Enter Player Name\n";
    cout<< "\nplayer 1: ";
    getline(cin,a);
    cout<< "\nplayer 2: ";
    getline(cin,b);
    while(1)
    {
        cout<< "Player1 Turn: ";
        cin>> player1;
        input(tgrid,player1,'o');
        cout<< "Player2 Turn: ";
        cin>> player2;
    }
    return 0;
}