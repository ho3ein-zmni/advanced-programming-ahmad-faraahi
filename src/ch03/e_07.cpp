/*

welcome to your first "official calculator" LOL

this program calculate "*","+","-","/","%(remainder)"

author:hussein zmni

4 nov 2022 15:08



*/

#include<iostream>

using namespace std;

int main()
{
    int a,b;
    char c;
    float r;
    bool flag=true;
    

    while(flag==true)//loop is optional not necessary
    {
        cout<<"enter your first number:(use ctrl+c for ending) ";
        cin>>a;
        cout<<"select your oprator(*+-/%):enter 'e' instead 'oprator for ending' ";
        cin>>c;
        cout<<"enter second number: ";
        cin>>b;


        switch(c)
        {
            case '+':
            r=a+b;
            cout<<a<<" + "<<b<<" = "<<r<<endl;
            break;

            case '-':
            r=a-b;
            cout<<a<<" - "<<b<<" = "<<a-b<<endl;
            break;

            case '*':
            r=a*b;
            cout<<a<<" * "<<b<<" = "<<a*b<<endl;
            break;

            case '/':
            r=a/b;
            cout<<a<<" / "<<b<<" = "<<a/b<<endl;
            break;

            case '%':
            r=a%b;
            cout<<a<<" % "<<b<<" = "<<a%b<<endl;
            break;
            case ' ':
            case '\n':
            break;

            case 'e':
            flag=false;
            break;


            default:
            cout<<"you must enter valid format."<<endl;
            break;
        }
    }
}