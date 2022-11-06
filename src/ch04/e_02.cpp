/*

this program converts "for's" loop to "while" loop.

6 nov 2022 18:03





*/


#include<iostream>

using namespace std;

int main()
{
    int a,n;
    cout<<"enter n: ";//first loop
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<i*i<<endl;
    }



    cout<<"enter another number: ";
    cin>>n;
    int j=1;
    

    while(j<=n)//second loop(but it does same work!!)
    {
        cout<<j*j<<endl;
        j++;
    }
}