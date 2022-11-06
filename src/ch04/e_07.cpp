/*

this program receive "number" from you and print the sum of squares(1-number)
""do-while version""

author: hussein zmni

6 nov 2022 19:11


*/
#include<iostream>

using namespace std;

int main()
{

    unsigned int number,i=1,sum=0;

    cout<<"enter number: ";
    cin>>number;

    do
    {
        sum+=i*i;
        i++;
    }
    while(i<=number);

    cout<<"the sum of squares is: "<<sum<<endl;
}