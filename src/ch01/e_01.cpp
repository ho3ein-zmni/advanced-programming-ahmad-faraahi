/*

"""this program will print lower and capital

    letter together.""""

    there are many methods for doing this.

    author: hussein zmni

    2 nov 2022  01:03 AM


    */




#include <iostream>
using namespace std;

int main()
{

   int a=65,b=97;    // this number because ascii code,,,,A=65/Z=90,,,,a=97/z=122

   for(a=65;a<=90;a++)
   {
    
   
    cout<<char(a)<<char(b)<<" "; // char receive int argument and return character
    b++;
   }
   cout<<endl;

    
    
    
}

