/*

welcome to chapter 2.

i suggest you,to select new book for learning c++ or c like "deitle & deitle 5 or 6.7.8.... edition ,
because this book is a bit old and outdated.

this program show you diffrent way to subtract 1 from n.
there are a lot of method for doing this.

author: hussein zmni

2 nov 2022  22:15


*/


#include <iostream>

using namespace std;

int main()
{
    int n,a;
    cout<<"enter n: ";
    cin>>n;
    a=n;  //to show you diffrent method i save n
                    
    cout<<"method one : (n-1) ="<<n-1<<endl;
    
    

    cout<<"method two : (--n) ="<<--n<<endl;
    n=a;
    n-=1;
    cout<<"method three : (n-=1) ="<<n<<endl;
    n=a;
    n--;
    cout<<"method four : (n--) ="<<n<<endl;


}