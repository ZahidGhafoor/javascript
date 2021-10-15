/*
    FUNCTION OVERLOADING :
            Function overloading is a C++ programming feature that allows us to have more than one function having same name but different parameter list, when I say parameter list, 
               it means the data type and sequence of the parameters, 
            For example the parameters list of a function myfuncn(int a, float b) is (int, float) which is different from the function myfuncn(float a, int b) parameter list (float, int).
                * Function overloading is a compile-time polymorphism.


*/


#include<iostream>
using namespace std;

int add(int a, int b)
{
    cout<<"Using Function with 2 Arguments = ";
    return (a+b);
}

int add(int a, int b, int c)
{
    cout<<"Using Function with 3 Arguments = ";
    return (a+b+c);
}

                            // Volume of Different Things with the Help of Function Overloading.
int volume (int a, int b)
{
    cout<<"Cylinder of 5r & 10h = ";
    return (3.14*a*a*b);
}

int volume (int a)
{
    cout<<"Cube of 15a = ";
    return (a*a*a);
}

int volume (int a, int b, int c)
{
    cout<<"Rectangular Box of 8l, 6b & 10h = ";
    return (a*b*c);
}


int main()
{
    cout<<" FUNCTION OVERLOADING :\n";
    cout<<"The Sum of 5 & 8 By "<<add(5,8)<<endl;           // There is two function with the same function name, so the compiler take the relavent function (In this case there is 2 Arguments in both User-Define function & Main Function) So, for this problem, This is Called Function Overloading.
    cout<<"The Sum of 9, 8 & 10 By "<<add(9,8,10)<<endl;    // There is two function with the same function name, so the compiler take the relavent function (In this case there is 3 Arguments in both User-Define function & Main Function) So, for this problem, This is Called Function Overloading.
    cout<<endl<<endl<<endl;



    cout<<"CALCULATE THE VOLUMES OF DIFFERENT THINGS BY FUNCTION OVERLOADING :\n";
    cout<<"The Volume of "<<volume(15)<<endl;       // Volume of Cube By Function Overloading.
    cout<<"The Volume of "<<volume(5,10)<<endl;     // Volume of Cylinder By Function Overloading.
    cout<<"The Volume of "<<volume(8,6,10)<<endl;   // Volume of Rectangular Box By Function Overloading.

   return 0;
}


