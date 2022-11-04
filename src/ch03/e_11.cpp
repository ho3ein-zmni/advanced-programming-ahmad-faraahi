/*

    alright,,
    this is an interesting and informative program.
    we receive a multi-digit number from user and
    we add each of its digits together with "/" and "%".

    assume the user enter 6 digits.

    good luck!!!

    author:hussein zmni

    4 nov 2022 17:41



*/

#include<iostream>
using namespace std;

int main()
{
    
    
    int sum=0,a,c;

    cout<<"enter number (between 99,999 and 999,999: ";
    cin>>a;

    for(int b=100000;b>0;b/=10)//we must divide that number by(100000,10000,...,10,1)
    {
        c=a/b;//this is the single digit in which it was srored in c
        a%=b;//and its the whole nomber without previous digit(a.k.a a=a%b)
        sum+=c;//this is sum of single digits
    }

    cout<<"the sum of digits is "<<sum<<endl;






}