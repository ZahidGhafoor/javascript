/*
    DEFINE POINTER IN C++:
        Pointer is a variable in C++ that holds the address of another variable. They have data type just like variables, for example an integer type pointer can hold the address of an integer variable and an character type pointer can hold the address of char variable.
        In Pointer '&' (ampersent) is used to find the adress of the operator.
        AND '*' is the Dereferance Operator is used to find the value at the adress operator.
            To fine the Adress of a Adress Operator by storing the adress in a Variable use the POINTER TO PINTER Operator (**).

*/

#include<iostream>
using namespace std;

int main()
{
    
    int a = 45;
    int* b = &a;            // This is how the pointer Veriable write.
    cout<<"ADRESS OPERATOR:\n";
    cout<<"The Value of 'A' is:\n";
    cout<<a<<endl;

    cout<<"The Adress of the Value 'A' in 'B' is:\n";
    cout<<b<<endl;
    cout<<"Another way to fined the Adress of 'A' Without Storing the Adress of the given Variable into Another :\n"<<&a<<endl;
    cout<<"The Adress of the Adress Operator 'B' (Because B is also a Variable so it hase also a Adress) is :\n"<<&b<<endl;
    cout<<endl;
    
    cout<<"DEREFERANCE OPERATOR:\n";
    cout<<"The Value at Adress operator 'B' is :\n"<<*b<<endl; 
    cout<<endl<<endl;


    int j = 100;
    int* k = &j;
    int** l = &k; 
    cout<<"POINTER TO POINTER (Advanced) : \n";
    cout<<"The Value of Variable 'J' :\n"<<j<<endl;
    cout<<"The Adress of Variable 'J' At 'K' :\n"<<k<<endl;
    cout<<"The Adress of the Adress Operator 'K' At 'L' (Pointer to Pointer Operator) : \n"<<l<<endl;

    cout<<"Another way to fined the Adress of the Adress Variable 'K' Without using the Pointer to Ponter Operator :\n"<<&k<<endl;
    cout<<endl;

    cout<<"If we will Dereferance Variable 'L' One Time Then we will fine the Value of 'K' (Which is the adress of Variable J ), As the Variable 'L' is the Pointer to Pointer Variable:\n"<<*l<<endl;
    cout<<"If we will Dereferance Variable 'L' two Times Then we will fine the Value of 'J' (Which is 100), As the Variable 'L' is the Pointer to Pointer Variable:\n"<<**l<<endl;

    return 0;
}
