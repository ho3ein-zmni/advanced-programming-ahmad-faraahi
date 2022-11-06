/*

this program receives positive number from you and reverses it. 

author:hussein zmni

6 nov 20:10


*/

#include<iostream>

using namespace std;

int main()
{
    unsigned int n,a=0;

    cout<<"enter Positive number,,i show you its reversed: ";
    cin>>n;

    for(int i=1;n>0;i++)
    {
        a=n%10;//print right to left the number with remaining operation 
        cout<<a;
        n=n/10;//removing the most upright number.
        
    }
}