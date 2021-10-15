/*
DATA Types:
     DAta Types define the type a veriable can hold, for example an integer variable can hold integar data, a character type variable can hold character data etc.
     DataTypes in C++ are categorized in three groups:
                  1. Built-in
                  2. User-Define
                  3. Derived
        
        Built-in DataTypes:
            These are the built-in data types:
                1. int                  2. Float
                3. Char                 3. Double
                5. Boll

        User-Defined DataType:
            There are three types of user-defined data types:
                1. Struct
                2. Union
                3. Enum
        
        Derived DataTypes:
            There are three types of drived data types:
                1. Array
                2. Function 
                3. Pointer

*/

#include<iostream>
using namespace std;

int main(){
    int a = 99 ;
    float b = 3.5 ;
    char c = 'A' ;
    double d = 9.9935 ;
    cout<< "DATA TYPES:\n       Built-in DataTypes:\n           Int Variable:-" << a ;
    cout<< "\n           Float Variable:-" << b ;
    cout<< "\n           Character Variable:-" << c ;
    cout<< "\n           Double Variable:-" << d ;
    cout<< "\n           Bollean Variable:- ?????";
    return 0;
}
