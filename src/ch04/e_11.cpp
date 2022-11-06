/*

welcome to greatest common denominator(aka "gcd") the Euclidean aigorithem.

this program receive from you 2 number and will show gcd between numbers.

make sure that always "a" greater than "b",and the loop ends until r=0(Note that b=r)

author:hussein zmni

6 nov 2022 22:08

*/







#include<iostream>

using namespace std;

int main()
{
    unsigned int a,b,r,temp;

    cout<<"enter two number for finding greatest common denominator: ";
    cin>>a>>b;
    if(a<b)//make sure a>b,,if not change it.
    {
        temp=a;
        a=b;
        b=temp;

    }

    while(b!=0)//this is works until b = 0(in other words r=0)
    {
        r=a%b;//a <- b and b <- r
        a=b;
        b=r;
        
        
    }
    cout<<"the greatest common denominator between two number is "<<a<<endl;
}