/*
    CONTROL STRUCTURE:
        Control Structures. "Statements used to control the flow of execution in a program". Means a statement through which we control the behavior of our program like what kind of function it will perform, when it will terminate or continue under certain circumstances or conditions.
        There are three types of Control Structure.
            1. Sequence Control Struture.
            2. Selection Control Structure.
            3. Loop Control Structure.
              (These three structure are the basic Control structures)  
                SEQUENCE CONTROL STRUCTURE:
                    The sequence structure is built into C++. The computer executes C++ statements one after the other in the order in which they’re written—that is, in sequence.

                SELECTION CONTROL STRUCTURE:
                     Also known as a conditional structure, a selection structure is a programming feature that performs different processes based on whether a boolean condition is true or false. Selection structures use relational operators to test conditions. There are different types of selection structures that can be used to achieve different outcomes.
                        *If you want your program to do something if a condition is true, but do nothing if that condition is false, then you should use an if-end structure.
                        *If you want your program to do something if a condition is true and do something different if it is false, then you should use an if-else structure.
                        *If you want to test multiple conditions, then you can include an elseif structure within an if-end or if-else structure.
                            Selection Control Structure can be implimented by the followin way:
                                1. IF-ELSE Statement.
                                2. IF-ELSE Lader.
                                3. SWITCH CASE Statements. 

                LOOP CONTROL STRUCTURE:
                    Loops are used in programming to repeat a specific block until some end condition is met.





*/

#include<iostream>
using namespace std;

int main()
{
    
    int a;
    cout<<"SEQUENCE STRUCTURE:\n";
    cout<<"This is the Example of Sequence Structure:\n";
    cout<<"Enter Your AGE = ";
    cin>>a;
    cout<<"Your Age is = "<<a<<endl;
    cout<<endl<<endl;



    int age;
    cout<<"SELECTION SECTURE (IF-ElSE LADER) :\n";
    cout<<"Tell Me Your AGE = ";
    cin>>age;
    
    if (age<18 && age > 0) 
    {
        cout<<"You Can't Drive.\n";
    }
    else if (age == 18)
    {
        cout<<"You Have To Get Driving Licence To Drive.\n";
    }
    else if (age < 1)
    {
        cout<<"INTERNAL ERROR 000";
    }
    else
    {
        cout<<"You Can Drive Freely.\n";
    }
cout<<endl;

    int ope;
    cout<<"SELECTION SECTURE (SWITCH CASE) :\n";
    cout<<"Plz Enter Your Netword Operator (EG. 0300, 0311, 0322, 0333, 0344) : ";
    cin>>ope;
    switch (ope)
    {
    case 300:
        cout<<"You are Using JAZZ\n";
        break;
    case 311:
        cout<<"You are Using Zong\n";
        break;
    case 322:
        cout<<"You are Using Warid\n";
        break;
    case 333:
        cout<<"You are Using Ufone\n";
        break;
    case 344:
        cout<<"You are Using Telenor\n";
        break;
    
    default:
    cout<<"PLZ ENTER THE VALID CODE \n ERROR 000"<<endl;
        break;
    }


    return 0;
}
                                        // LOOPS WILL BE DISCUSSED IN NEXT CLASS IN DETAIL \\