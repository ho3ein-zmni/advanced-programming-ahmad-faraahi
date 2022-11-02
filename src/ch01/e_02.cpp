/*

"""this program will show you letter "B"

    with asterisk!!""""

    there are many methods for doing this.

    author: hussein zmni

    2 nov 2022  01:28 AM


    */






#include <iostream>
using namespace std;

int main()
{
    unsigned int a=1;

    for(a=1;a<=7;a++)//loop 7 times executed
    {
        if(a==1||a==4||a==7)
        {
            cout<<"*****";
        }
        else{
            cout<<"*   *";
        }
        cout<<endl; //move to next line
    }
}