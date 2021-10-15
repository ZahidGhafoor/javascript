/*
VERIABLES:
        A variable is a container to hold data. Variable can be of various type we have these variable 
type in c++.
        1. int      (All integiars  eg. -1, 0, 1 etc)
        2. Float    (Small decimals eg. 0.1, 1.2, 5.5 etc)
        3. Char     (All characters eg. a, A, b, C, 1, 2, 3 etc)
        4. Double   (Large decimals eg. 0.00123, 1.2232, 4345.324 etc)
        5. Boolean  (True or False )
 Syntax For declaring Variables in C++:
                                int (Variable type) xyz (Variable name) = Value;
                                                     EX.  int a = 55;

VARIABLE SCOPE:
        Scope of a variable is the region in code where the existance of a variable is valid.
    Based on scope we have:
             1. local Variables.
             2. Global Variables.
    Local Variable:
            Local variables are declared inside the braces of any function & can be accessed only from there.
    Global Variable:
            Gloabal variables are declared outside any function & can be accessed from any whare.
Local & Global variables may have same names.

*/

#include<iostream>
using namespace std;

int glob = 45; // This is a Global veriable
int a = 99 ;   // This also Global Veriable & has the same name as the local veriable. (In this condition the local veriable is prefered over Globale)
int main(){
    int a = 4;       // This is the example of int Variable as a Local (Because it is in the main function).
    float b = 0.5;   // ..............................
    cout<< "Problem Solved\n The int Variable (Local) is :- "<< a <<"\nThe float Variable is:- "<<b ;
    cout<< "\n\nLOCAL & GLOBALE VERIABLES:\n The int Variable (Globale) is :- "<< glob <<"\nThe int Variable (Named 'a' which is local & globle, As the command is called with in the function so the local veriable is shown ) is:- "<<a ;
    return 0;
}


                        //.................END................//
                      