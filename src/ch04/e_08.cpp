/*


this program does "division" and "remainder operation" without "%" and "/",,
Note that if A>B you can write A=k*B+r(k is non negative integer and r is remainder),,
so if you substract k times B from A,you will get the remainder and k(counter) is the answer is division.
good luck...

author:hussein zmni

6 nov 2022 19:34



*/


#include<iostream>
using namespace std;

int main()
{
    unsigned int a,b,k=0,r,temp;

    cout<<"enter 2 number,i show you integer remainder and result of division: ";
    cin>>a>>b;

    if(a<b)//i must be sure that "a" is greater than "b". 
    {
        temp=b;//the method of replacing two variables with "temp".
        b=a;
        a=temp;
    }

    while(a>=b)
    {
        a-=b;//this is a=a-b,,,I substract "b" from "a", "k" time
        k++;

    }

    cout<<"the remainder is "<<a<<" and the result of division is "<<k<<endl;
}