/*

this program performs the follwing commands in order(number starts 0 to 7)
for i=0 to i=7
1-if is divisible to 2: print i+1  (0 is divisible any number!!!)
2-else if is divisible t0 3: print i*i
3-else if is divisible to 5:print 2 * i - 1
4-else :print i

author:hussein zmni

6 nov 2022 18:45


*/






#include<iostream>

using namespace std;

int main()
{
    
 for (int i=0;i<8;i++)
 {
    if (i%2==0)
    {
        cout<<i+1<<"\t";
    }
    else if(i%3==0)
    {
        cout<<i*i<<"\t";
    }
    else if(i%5==0)
    {
        cout<<2*i-1<<"\t";
    }
    else
    {
        cout<<i<<"\t";
    }
 }
}