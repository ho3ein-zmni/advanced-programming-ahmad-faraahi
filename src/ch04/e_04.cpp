/*

this program performs the follwing commands in order(number starts 0 to 7)
for i=0 to i=7

1-if is divisible to 2: print i+1  (0 is divisible any number!!!)

2-else if is divisible t0 3: continue (skip further instructions and check condition)

3-else if is divisible to 5:break (skip further instructions and get out of this block!!)


author:hussein zmni

6 nov 2022 18:51


*/

#include<iostream>

using namespace std;

int main()
{
    for(int i=0;i<8;i++)
    {
        if(i%2==0)
        {
            cout<<i+1<<"\t";

        }
        else if(i%3==0)
        {
            continue;
        }
        else if(i%5==0)
        {
            break;
            cout<<"end of the program"<<endl;//this expression does not execute(break skipped)
        }

    }

    cout<<"end of program!!!"<<endl;
}
