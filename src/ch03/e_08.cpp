/*

welcome to ur first game in programming "Rock paper scissors game"

how to play??:
well,we need two players,,
second player should cover his eyes and
first player enters 'r'(Rock) or 'p'(paper) or 's'(scissors)
and looks away from the monitor and keyboard,and second player enters 'r' or 'p' or 's'.

this result is print the monitor and winner will be determined.

author:hussein zmni

4 nov 2022 16:01



*/

#include<iostream>

using namespace std;

int main(void)
{
    bool win=false,draw=false;//using bool is optional,,you can instead print winner.
    cout<<"the first player(r,p,s): ";
    char a;
    cin>>a;

    cout<<"the second player(r,p,s): ";
    char b;
    cin>>b;

    switch(a)
    {
        case 'r':


        if(b=='r'){
            draw=true;

        }
        else if(b=='s')
        {
            win=true;
        }
        else
        {
            win=false;
        }
        break;


        case 'p':


        if(b=='p'){
            draw=true;

        }
        else if(b=='r')
        {
            win=true;
        }
        else
        {
            win=false;
        }
        break;


        case 's':

        if(b=='s'){
            draw=true;

        }
        else if(b=='p')
        {
            win=true;
        }
        else
        {
            win=false;
        }
        break;

        default:
        cout<<"invalid input!!!"<<endl;
        
    }
    if(draw)//that's mean if(draw==true) then do this.
    {
        cout<<"this game equalised.\n";
    }

    else if(win)
    {
        cout<<"first player is win.\n";
    }
    else if(win==false)
    {
        cout<<"winner is second player.\n";
    }

    

}