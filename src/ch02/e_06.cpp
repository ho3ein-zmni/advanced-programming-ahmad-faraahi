/*

this program demonstrates you overflow in "short" type.

auther: hussein zmni

2 nov 2022  23:17


*/

#include<iostream>

using namespace std;//for prevent repition "std::"

int main()
{

short n=2;

for(int a=1;a<=n;a++)
{
    n*=2;
}
cout<<"last n is: "<<n<<endl;

}