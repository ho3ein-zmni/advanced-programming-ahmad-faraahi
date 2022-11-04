/*
    this program is receive you two number and print them in the ascending.

    4 nov 2022 14:15

*/

#include<iostream>

using namespace std;

int main()
{
    int a,b,max;
    cout<<"enter two number: ";
    cin>>a>>b;
    max=(a>b?a:b);

    cout<<(a>b?b:a)<<"<="<<max<<endl;
}