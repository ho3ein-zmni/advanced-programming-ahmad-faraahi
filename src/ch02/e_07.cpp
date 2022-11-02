/*

this program print only Vowels letter.

author: hossein zamani

2 nov 2022 23:31

*/

#include<iostream>

using namespace std;

int main()
{
    int z;

    cout<<"enter one Vowel letter, i show you its ascii code: ";
    
    switch(z=getchar())
    {
        case 'a':
        case 'A':
        cout<<"the ascii code a : "<<z<<endl;
        break;

        case 'e':
        case 'E':
        cout<<"the ascii code e : "<<z<<endl;
        break;

        case 'i':
        case 'I':
        cout<<"the ascii code i : "<<z<<endl;
        break;

        case 'u':
        case 'U':
        cout<<"the ascii code u : "<<z<<endl;
        break;

        case 'o':
        case 'O':
        cout<<"the ascii code o : "<<z<<endl;
        break;

        default:
        cout<<"Not Vowels!!!"<<endl;
        

    }
}