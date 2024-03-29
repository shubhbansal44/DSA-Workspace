#include<bits/stdc++.h>
using namespace std;

void computer_muve(char *computer_move)
{
    // srand(time(NULL));
    int cm=rand()%3;
    if(cm==0)
    {*computer_move='r';return;}
    else if(cm==1)
    {*computer_move='p';return;}
    else
    {*computer_move='s';return;}
}

char results(const char *computer_move,const char *player_move)
{
    if(*computer_move==*player_move)
    return 'd';
    else if((*player_move=='p' && *computer_move=='r')||(*player_move=='r' && *computer_move=='s')
    ||(*player_move=='s' && *computer_move=='p'))
    return 'w';
    else
    return 'l';
}

int main()
{
    char player_move,computer_move;
    cout<< "Welcome To Rock,Paper&sicssors!!\n\n";
    cout<< "Enter 'r' For Rock.\nEnter 'p' For Paper.\nEnter 's' For sicssors.\n\n";
    l2:
    while(1)
    {
        cout<< "Enter Your Move: ";
        cin>> player_move;
        if(player_move=='p'||player_move=='r'||player_move=='s')
        break;
        cout<< "\nInvalid Move!!\nTry Again!!\n\n";
    }
    computer_muve(&computer_move);
    cout<< "Computer Move: "<< computer_move<< "\n\n";
    char result=results(&computer_move,&player_move);
    if(result=='d')
    {cout<< "draw!!\nTry Again!!\n\n";goto l2;}
    else if(result=='w')
    cout<< "Congratulations!!\nYou Win!!\n\n";
    else
    cout<< "You Loss!!\n\n";
    goto l2;
    return 0;
}