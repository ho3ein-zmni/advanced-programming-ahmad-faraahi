/*

this program calculates the root of equation with double type like previous exercices.


author: hossein zmni

4 nov 2022  17:15

*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double a,b,c,x1,x2,delta,sq,r1,r2;

    cout<<"ur equation is ''a*x*x + b*x + c'' so enter a ,b ,c: ";
    cin>>a>>b>>c;

    delta = (b*b) - (4*a*c);

    sq = sqrt(delta);//i saved the radical of delta

    x1 = ( -b + sq)/(2*a);
    x2 = (-b - sq)/(2*a);

    //testing and printing root:
        r1=a*x1*x1 + b*x1 + c;
        r2=a*x2*x2 + b*x2 + c;
        if ((r1 !=0)||(r2!=0))
        {
            cout<<"this equation there is no answer!!!!"<<endl;
        }
        else
        {

       

        
        cout<<"ur root is: "<<x1<<" and "<<x2<<endl;
        cout<<"testing\na*x1*x1 + b*x1 + c = "<<a*x1*x1 + b*x1 + c<<endl;
        cout<<"a*x2*x2 + b*x2 + c = "<<a*x2*x2 + b*x2 + c<<endl;
         }

}