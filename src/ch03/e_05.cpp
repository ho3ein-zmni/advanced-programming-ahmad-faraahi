/*

"enter your age and see your age status"

author:hussein zmni

4 nov 2022  14:30





*/



#include<iostream>

using namespace std;

int main()
{
    unsigned int age;

    cout<<"enter ur age(0-999): ";
    cin>>age;

    if(age<18)
    {
        cout<<"You are a child dont worry!!!!"<<endl;
    }

    else if((age>=18)&&(age<65))
    {
        cout<<"You are an adult let's play cod mobile!!!!"<<endl;
    }

    else
    {
        cout<<"you are too old let's play mortal combat!!!"<<endl;
    }
}