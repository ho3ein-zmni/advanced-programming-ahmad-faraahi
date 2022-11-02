/*

hope you enjoy so far,,,

         this program catch inch and change to centimeter.

                author:hossein zmni

                        3 nov 2022 00:17


*/

#include<iostream>
using namespace std;

int main()
{
    float a;
    
    do
    {
        cout<<"enter size(in inch) and ctrl+c to end: ";
        
        cin>>a;
        if(a==EOF)
        {
            break;
        }
        cout<<"ur size is "<<a*2.54<<" centimeter \n";

    }
    while(true);
   

}