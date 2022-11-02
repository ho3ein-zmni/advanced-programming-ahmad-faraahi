/*

this program calculates the root of equation with double type and you see this logic error.

author: hossein zmni

2 nov 2022  23:52

*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double a,b,c,x1,x2,delta,sq;

    cout<<"ur equation is ''a*x*x + b*x + c'' so enter a ,b ,c: ";
    cin>>a>>b>>c;

    delta = (b*b) - (4*a*c);

    sq = sqrt(delta);//i saved the radical of delta

    x1 = ( sq - b)/sq;
    x2 = ((-1*sq)-b)/sq;

    //testing and printing root:

  
        cout<<"ur root is: "<<x1<<" and "<<x2<<endl;
        cout<<"testing\na*x1*x1 + b*x1 + c = "<<a*x1*x1 + b*x1 + c<<endl;
        cout<<"a*x2*x2 + b*x2 + c = "<<a*x2*x2 + b*x2 + c<<endl;

   

     

    


}