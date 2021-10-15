/*
        DEFINE FUNCTION:
                A function is a group of statements that together perform a task. Every C++ program has at least one function, which is main(), and all the most trivial programs can define additional functions.
                A function is a block of code which only runs when it is called.
                You can pass data, known as parameters, into a function.
                Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.


        DEFINE FUNCTION PROTOTYPING:
                In C++, function prototype is a declaration of function without its body to give compiler information about user-defined function.
                If a user-defined function is defined after main() function, compiler will show error. It is because compiler is unaware of user-defined function, types of argument passed to function and return type.

                DEFINE ACTUAL PARAMETERS:
                    The Assingment operator that is given to another functions is called Actual Parameters.
                DEFINE FORMAL PARAMETERS:
                    The Assingments operators that take values from the Actual Paraments is called Formal Parameters.
                        * The Actual & Formal Parameters may have same assingment operatr (Same Name).

*/

#include<iostream>
using namespace std;


int sum(int a, int b)     // In this statement 'a' & 'b' are the Formal Parameters.
{
    int c = a+b;
    
    return c;
}

            // This line is very important to tell the compilar about the function, that diclared in Program, this is called Prototyping.
int neg(int a, int b);      //If this diclarition is not set Program gives error is this type of function is called in main function.

void g();
// g();    //   Another way of Prototyping.

int main()              //This is also a function , whare the program is started.
{
    int num1 , num2;

    cout<<"FUNCTION : \n";
    cout<<"Enter your First Number = ";
    cin>>num1;
    cout<<"Enter your Second Number = ";
    cin>>num2;
    cout<<"Your Sum is = "<<sum(num1, num2);        // In this statement 'num1' & 'num2' are the Actual Parameters because these are given to another function from main function.
    cout<<endl<<endl<<endl;
    


    int num3, num4;
    cout<<"FUNCTION PROTOTYPE : \n";
    cout<<"Enter your First Number = ";
    cin>>num3;
    cout<<"Enter your Second Number = ";
    cin>>num4;
    cout<<"Your Subtraction is = "<<neg(num3, num4);
    g();     // Void Function.
    return 0;
}

int neg(int a, int b)
{
    int c = a-b;

    return c;
}

void g()      // Void Function Which can't take any Value and also Return Nothing.
{
    cout<<"\nJarviz ShutDown..........";
}

