/*
    this program receive two number and it shows that they are multiple or not.

    there are too many ways.

    4 nov 2022 14:44



*/


#include<iostream>

using namespace std;

int main()
{
    int a,b;

    cout<<"enter two number,i show you whether first multiple of second or not: ";

    cin>>a>>b;

    //if the answer 'a%b' is equal '0' third sequence will run
    cout<<(a%b?"not multiple\n":"multiple each other\n");

}