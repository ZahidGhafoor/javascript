/*
    LOOPS CONTROL STRUCTURE:
        Loops are used in programming to repeat a specific block until some end condition is met.
        There are three types of Loops in C++:
            1. For Loop.
            2. While Loop.
            3. Do-While Loop

                FOR LOOP:
                    Syntax for For-Loop:
                        for(initialization; condition; updation)
                        {
                            loop body (C++ code)
                        }
                *First it will initialize for 1 time,than it'll check the condition , if condition is true than axecute the loop boddy,than it will perform updation & than again check the condition & execute the loop body (if condition True). It will repeat this process until the condition become false.

                WHILE LOOP:
                    Syntax for While-Loop:
                        while(condition)
                        {
                            Loop boddy (C++ Code)
                        }
                *It will also iterate continuously untile the condition become false.

                DO-WHILE LOOP:
                    Syntax for While-Loop:
                        do
                        {
                            Loop body (C++ Code)
                        }while (Condition);
                *In this Loop the Loop body is excuted 1st & then check the condition, If the condition is true then the loop iterate again other wise stope.


*/

#include<iostream>
using namespace std;

int main()
{

    int a = 0;
    cout<<"FOOR LOOP:\n";

    for (int a = 0; a <= 100; a++) // If we add such a condition which will never false then the loop iterate infinitely, EG. 'true' or in this case '10 < 100' is true. 
    {
        cout<<a<<endl;
    }
cout<<endl<<endl<<endl;



    int b = 101;
    cout<<"WHILE LOOP:\n";

    while (b < 201)     // We can also iterate the while loop infinitely, If the condition is True Always. EG. write 'True' in condition can also iterate the loop infinitely.
    {
        cout<<b<<endl;
        b++;
    }
cout<<endl<<endl<<endl;


    int c = 201;
    int d = 300;
    cout<<"D0-WHILE LOOP:\n";
    do
    {
        cout<<c<<endl;
        c++;
    } while (c < 300);  // This will behave same as the While loop.
cout<<endl; 
    
    cout<<"In Case of False Condition In Do-While Loop (the Program is excuted 1 time, This behaviour make it different from the WHile Loop) :"<<endl;
    do
    {
        cout<<d<<endl;
        d++;
    }while (false);
    

    return 0;
}
