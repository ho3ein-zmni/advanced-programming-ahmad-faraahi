/*

"""alright,my first family name is "z",
this program will show you first letter in my family name XDDD
hope your first family name is "z"!!!

    

    there are many methods for doing this.

    author: hussein zmni

    2 nov 2022  02:05 AM


    */




#include <iostream>
using namespace std;

int main()
{
    int i;

    cout<<"********"<<endl;//head of Z
    
    for(i=7;i>=1;i--)//this number for aesthetics letter( there are a lot of choice!!)
    {
        for(int j=1;j<=i;j++)//we need blankspace for z
        {
            cout<<" ";
        }
        cout<<"*";//body of Z

        cout<<endl;
    }
    cout<<"********"<<endl;//foot of Z

}