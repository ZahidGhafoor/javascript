/*
    BREAK & CONTINUE STATEMENTS:
        Break Statements:
            This is used when a condition is reached then the loop exits.

        Continue Statement:
            It is use in some special cases, like to skip a statement ETC. 
            we will dissus briefly in practial.

*/

#include<iostream>
using namespace std;

int main()
{
    
    cout<<"BREAK STATEMENTS:\n";
    cout<<"Loop Without Break:\n";
    for (int i = 0; i <= 50; i++)
    {
        cout<<i<<endl;
        
    }
    cout<<"Break The Loop at 25 (Included):\n";
    for (int i = 0; i <= 50; i++)
    {
        cout<<i<<endl;                     // In this case the loop break at 25 with printing 25, because the statement of printing 25 is written before the break statement.
        if (i == 25)
        {
            break;
        }
        
    }
    cout<<"Break The Loop at 25 (Excluded):\n";
    for (int i = 0; i <= 50; i++)
    {
        if (i == 25)
        {
            break;
        }
        cout<<i<<endl;                     // In this case the loop break at 25 without printing, because the statement of printing 25 is written after the break statement.
        
    }
cout<<endl<<endl<<endl;



    cout<<"CONTINUE STATEMENTS:\n";
    cout<<"Continue Statement without any change or Skiping the statement:\n";
    for (int a = 51; a <= 80; a++)
    {
        cout<<a<<endl;          // This will do noting at 60, because 60 is print before the continue statement & there is no effect on the program.

        if(a == 60)
        {
            continue;                
        }
    }
    cout<<"Continue Statement with Skiping 60:\n";
    for (int a = 51; a <= 80; a++)
    {

        if(a == 60)
        {
            continue;                
        }
        cout<<a<<endl;          // This will Skip 60, because 60 is print after the continue statement & When the program reached this (a == 60) Condition it will continue the loop and the skip the statements after the Condition body.
    }
    

    return 0;
}

