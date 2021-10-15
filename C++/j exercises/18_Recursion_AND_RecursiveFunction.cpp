/*
    DEFINE RECURSION & RECURSION FUNCTION :
            C++ Recursion. When function is called within the same function, it is known as recursion in C++. The function which calls the same function, is known as recursive function.
                * A function that calls itself, and doesn't perform any task after function call, is known as tail recursion.








*/

#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)         // This is a Base Condition. When this condition reached the function is no more execute more.
    {
        return 1;
    }
    return n * factorial(n-1);          // This is Recursion.   & This Function is called Recursion Function.
}

int main()
{
    int a;
    cout<<"RESERCION FUNCTION :\n";
    cout<<"Factorial Calculator :"<<endl;
    cout<<"Enter A number to Calculate Factorial :- ";
    cin>>a;
    cout<<"The Factorial of "<<a<<" is = "<<factorial(a)<<endl;


    return 0;
}