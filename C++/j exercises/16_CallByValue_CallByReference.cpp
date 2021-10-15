/*
    DEFINE CALL BY VALUE:
        The call by value method of passing arguments to a function copies the actual value of an argument into the formal parameter of the function. 
        In this case, changes made to the parameter inside the function have no effect on the argument.







*/

#include <iostream>
using namespace std;

//              ******** CALL BY VALUE *******
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

//              ******** CALL BY ADRESS\POINTERS *******
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//              ******** CALL BY REFERENCE *******
void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 4, b = 5;
    cout << "CALL BY VALUE :\n";
    cout << "The Value of 'A' = " << a << endl
         << "The Value of 'B' = " << b << endl;
    swap(a, b);
    cout << "The Value of 'A' After Swap  is = " << a << " No Change, because we do this by Call by Value, so no change accure" << endl;
    cout << "The Value of 'B' After Swap  is = " << b << " No Change, because we do this by Call by Value, so no change accure" << endl;
    // This will No swap 'A' and 'B' because  in the main function the actuall parameters only give the copy of its Value to Formal para meter in another function.
    // So, No change is accure, because there is no return Value.
    cout << endl
         << endl
         << endl;

    int x = 10, y = 50;
    cout << "CALL BY REFERANCE :\n";
    cout << "The Value of 'X' = " << x << endl
         << "The Value of 'Y' = " << y << endl;
    swapPointer(&x, &y);
    cout << "The Value of 'X' After Swap  is = " << x << " Change, because we do this by Call by Reference, because this will change the values at the adress by this mathod." << endl;
    cout << "The Value of 'Y' After Swap  is = " << y << " Change, because we do this by Call by Reference, because this will change the values at the adress by this mathod." << endl;
    // This wil Swap 'X' and 'Y' because in the main function the Actual Paramenters gives the adress of the values to the Formal Parameters of another function.
    // So, the other function change the Values at the adress & the values changed permanently.
    cout << endl
         << endl
         << endl;

    int m = 77, n = 99;
    cout << "SWAP BY REFERENCE VARIABLE :\n";
    cout << "The Value of 'M' = " << m << endl
         << "The Value of 'N' = " << n << endl;
    swapReference(m, n);
    cout << "The Value of 'M' After Swap  is = " << m << " Change, because we do this by Reference Veriables, because this will change the values of the Referance variables by this mathod." << endl;
    cout << "The Value of 'N' After Swap  is = " << n << " Change, because we do this by Reference Veriables, because this will change the values of the Referance variables by this mathod." << endl;
    // This will swap 'M' and 'N' because in user Function the Variable Pointing the Values in Main Function.
    // So, If we change the Pointing Variable then the Actual Variable is Also Changed.

    return 0;
}
