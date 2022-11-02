/*


this programm show you some output switch.

there are some "ecape sequence" below.


        \' 	    single quote 	 	
        \? 	    question mark 	
        \\ 	    backslash 	
        \a 	    audible bell 	
        \b 	    backspace 	
        \f 	    form feed - new page 	
        \n 	    line feed - new line 	
        \r 	    carriage return 	
        \t 	    horizontal tab 	
        \v 	    vertical tab 

    

    there are many methods for doing this.

    author: hussein zmni

    3 nov 2022  17:16 AM


    */


#include <iostream>
using namespace std;


int main()
{   
    int a;
    
    cout<<"enter ur \"escape sequence number\" from list,i show you its performance:\n";
    cout<<"1:\\n\t2:\\v\t3:\\f\t4:\\a\t5:\\t\t6:\\b\t7:\\?\t8:\\'\t9:\\r\t10:\\"<<"\\"<<"\n";
    cin>>a;//enter item number for see action

    while(true)//this loop begin untile you enter invalid input!!!
    {

     if(a==4)
     {
       
        cout<<"audible bell!!\n";
     }

        else if(a==6){
        cout<<"backspace!\n";
        
        }
        
       else if(a==9)
        cout<<"carriage return!\n";
        

        else if(a==1){
        cout<<"new line\n";
        }
        else if( a==2){
        cout<<"vertical tab.\n";
        }

        else if( a==5){
        cout<<"horizontal tab\n";
        }

        else if( a==8){
        cout<<"single quote\n";
        }

        else if(a==10){
        cout<<"backslash\n";
        }

      

        else if( a==7){
        cout<<"question mark\n";
        }


         else if( a==3){
        cout<<"new page!!\n";
        }

       

        else{
        cout<<"invalid!!!!\n";
        break;
        }

        cout<<"enter ur \"escape sequence number\" from list,i show you its performance:\n";
        cout<<"1:\\n\t2:\\v\t3:\\f\t4:\\a\t5:\\t\t6:\\b\t7:\\?\t8:\\'\t9:\\r\t10:\\"<<"\\"<<"\n";
        cin>>a;
     
     }
     



}

	 
