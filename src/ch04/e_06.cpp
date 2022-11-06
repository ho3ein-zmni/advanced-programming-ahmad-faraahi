/*

this program receive from you number and show you sum of squares(1-numebr)
""for version""

6 nov 2022 19:07


*/


#include<iostream>
using namespace std;

int main()
{
    unsigned int n,sum=0;

    cout<<"enter ur number: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        sum+=i*i;
    }

    cout<<"the sum of squares is: "<<sum<<endl;
}