/*

this program receive intger pstv-number from you,,and will show you
intger root(biggest integer whose square power is less than or equall to your number.)
don't use math library:).


author:hussein zmni

6 nov 2022 20:20 (Im waiting for 20:22 to coordinate every thing XDDDD)




*/

#include<iostream>

using namespace std;

int main()
{

     int n,j=1,i=0,s=0;

    cout<<"enter positive number my friend:) ";
    cin>>n;
    while(true)//i explore 1-n for finding intger root.
    {
        s=i*i;
        if(n<s)//if you finding first square number larger than "n",,the previous number is your answer!!!
        {
            break;
        }

        
        i++;

    }

    cout<<"this intger root is "<<i-1<<endl;//print previous number
}