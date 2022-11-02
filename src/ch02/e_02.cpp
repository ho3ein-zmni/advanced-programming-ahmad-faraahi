/*

this program show you add operation and (post)increment without using unary operator "++".





author: hussein zmni

2 nov 2022  22:32




*/

#include<iostream>

using namespace std;

int main()
{
    int n,m,a;

    cout<<"enter m: ";
    cin>>m;
    a=m;        //i save m for show diffrent method
    n= 100 + m++;//it does first 100+m and second m+=1
    cout<<"method one: n = 100 + m++ and \"n\" is "<<n<<"and m is "<<m<<endl;
    m=a;
    n= 100+m;
    m+=1;

    cout<<"method two: n = 100+m and second m+=1 so \"n\" is "<<n<<"and m is "<<m<<endl;


}