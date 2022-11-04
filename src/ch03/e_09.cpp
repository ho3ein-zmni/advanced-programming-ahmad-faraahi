/*

alright,,
        this is another version "Rock,paper,scissors" game.

        this version you and second player must enter at the same time(i know that two people
        cannot play on the same keyboard at the same time,,suppose we have two keyboards.) 

        and i use "enum" to show win,lose,draw.
        good luck.
        author:hussein zmni

        4 nov 2022 16:51 

*/

#include<iostream>

using namespace std;

enum Status{Win,Lose,Draw};

int main()
{
    Status game_st;//for see the result.

    string a,b;//instead you can use char.

    cout<<"rock paper scissors:(r,s,p) ";
    cin>>a>>b;

    if(a=="r")
    {
        if(b=="p")
        {
            game_st=Lose;
        }
        else if(b=="s")
        {
            game_st=Win;
        }
        else
        {
            game_st=Draw;
        }
    }
    else if(a=="s")
    {
        if(b=="r")
        {
            game_st=Lose;
        }
        else if(b=="p")
        {
            game_st=Win;
        }
        else
        {
            game_st=Draw;
        }

    }
    else if(a=="p")
    {
        if(b=="s")
        {
            game_st=Lose;
        }
        else if(b=="r")
        {
            game_st=Win;
        }
        else
        {
            game_st=Draw;
        }
    }

    if(game_st==Win)
    {
        cout<<"the first player is win.\n";
    }
    else if(game_st==Lose)
    {
        cout<<"the second player is win.\n";
    }
    else{
        cout<<"game is draw,gg\n";
    }

}