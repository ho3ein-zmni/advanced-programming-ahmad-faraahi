/*


this program receive 4 number and show you minimum number.

Note that to find between "n" number(largest or least) with this algorithm ,
we will do "n-1" comparison.


there are too many method for implementing this.

author:hussein zmni

4 nov 2022  13:15


*/



#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d,min;

    cout<<"enter 4 number,i will show you least of them: ";
    cin>>a>>b>>c>>d;

    min=a;//we assume "a" is the least number

    if(b<min)
    {
        min=b;
    }
    if(c<min)
    {
        min=c;
    }
    if(d<min)
    {
        min=d;
    }

    cout<<"the minimum is "<<min<<endl;
}