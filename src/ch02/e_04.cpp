/*

this program show you z-(x+y) and next y is incremented.

2 nov 2022 22:56

*/

#include<iostream>

using namespace std;

int main()
{
    int x,y,z,a;

    cout<<"enter x,y,z: ";
    cin>>x>>y>>z;

    a = z-(x + y++);
    cout<<"z-(x+y) and increment y, so answer is: a is "<<a<<" and y is "<<y<<endl;

    
}