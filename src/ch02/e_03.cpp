/*

this program show you add operation and (pre)increment without using unary operator "++".





author: hussein zmni

2 nov 2022  22:51




*/

#include<iostream>

using namespace std;

int main()
{
    int n,m,a;

    cout<<"enter m: ";
    cin>>m;
    a=m;        //i save m for show diffrent method
    n= 100 + ++m;//it does first m+=1 and second 100+m
    cout<<"method one: n = 100 + ++m and \"n\" is "<<n<<"and m is "<<m<<endl;
    m=a;
    
    m+=1;
    n= 100+m;

    cout<<"method two:  m+=1 and second n=100+m so \"n\" is "<<n<<" and m is "<<m<<endl;


}
