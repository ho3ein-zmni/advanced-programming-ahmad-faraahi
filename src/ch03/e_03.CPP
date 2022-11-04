/*

I will take three numbers from you and will show you "the middle of them"
Note that the middle of them not its avrage.
and between three numbers ,the middle number is the second largest number.

it is better to avoid complexity of "if...else".

As you now there are many ways.

author:hussein zmni

4 nov 2022 13:26



*/

#include<iostream>

using namespace std;

int main()
{
    int a,b,c,max,midd;

    cout<<"enter three number i will show you middle number between them: ";
    cin>>a>>b>>c;

    max=a;//we assume the a is larger
    if(b>c)//and assume according to the condition b or c is middle
    {
        midd=b;
    }
    else
    {
        midd=c;
    }

    if(max<b)
    {   
        if (max<c)// i check the "a"(aka max) to see if it is the middle or least number.
        {
            midd=c;
        }
        else{
            midd=max;//Note that the largest previous value is assigned to midd
        }
        
        max=b;
     
    }
    if(c>max)
    {
        midd=max;
        max=c;
    }

    cout<<"the middle of them is "<<midd<<endl;
}

