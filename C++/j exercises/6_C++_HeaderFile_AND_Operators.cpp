/*
    HEADER FILES:
        First line like "#include<iostream>" is a header file in c++. If we clik on iostream by holding control key, it will show the functionality of library(iostream).
        There are two types of header files.
            1. System Header File. (It will comes with compiler).
            2. User Defined Header Files. (It is written by programer)
                    System HEADER FILE :
                            Like 'iostream' it is used to costumize the program & also save time.
                            Best web to fine the system header files is https://en.cppreference.com/w/cpp/header.
                    User-define Header File:
                            It is written by programer with is writting a prticular programe . He writes the header file by the requriments of the programe.
                            like "#include 'this.h' "this is a
                            We are not going to depth of user-define header files in this class. we discussed this term in advanced level.
*/

/*
    OPERATERS:
        The folwing are the types of operators in C++
            1. Arithmetic operators.
            2. Assignment operators.
            3. Comparison operators.
            4. Logical operators.
            5. Bitwise operators.
               ETC.
          ARITHMATIC OPERATOES:
                The Following are the Arithmatic operatiors:
                     +, -, *, /, %, ++, -- ETC.
          
          ASSIGNMENT OPERATORS:
                The assignment operators are the names or characters with is used to assign the variables, EG. 'int a = 9' In this example 'a' is called assignment operator.

          COMPARISON OPERATOR:
                The Comparisons operator are used to compare the values. It will give the boolean values (True= 1 or False= 0).
                The Following are the Comparisons Operators:
                     ==, !=, <, >, <=, >= ETC.
          LOGICAL OPERATORS:
                The logical operator is used to compare the caopmarisions operators. It gives Boolen Values (True= 1 or FAlse= 0).
                The Following are the Logical Operators:
                     &&(and), ||(Or)`, !(not this will revert the result) ETC.
*/
#include<iostream>
using namespace std;

int main(){
    int a = 10, b = 2;

    cout<<"HEADER & OPERATORS in C++\n\n";
 
    cout<<"Arithmatic  OPERATORS in C++"<<endl;
    cout<<"The Value of a * b = "<<(a*b)<<endl;
    cout<<"The Value of a / b = "<<(a/b)<<endl;
    cout<<"The Value of a + b = "<<(a+b)<<endl;
    cout<<"The Value of a - b = "<<(a-b)<<endl;
    cout<<"The Value of a % b = "<<(a%b)<<endl<<endl;  // This will give 0 output but the actual solution is somewhat 0.0123 ect , As because the actual solution is a flot & the given variable is int, So it will show only ints as 0.

    cout<<"The Value of a++ = "<<(a++)<<endl;
    cout<<"The Value of a-- = "<<(a--)<<endl;
    cout<<"The Value of ++a = "<<(++a)<<endl;
    cout<<"The Value of --a = "<<(--a)<<endl<<endl<<endl;

    int x = 10, y = 20;
    cout<<"Comparison  OPERATORS in C++"<<endl;
    cout<<"The Value of x == y = "<<(x==y)<<endl;  // This is False as the the value of x & y is not equal, So the output is 0(False).
    cout<<"The Value of x != y = "<<(x!=y)<<endl;  // This is True as the value of  x & y is not equal as given, So the output 1(True).
    cout<<"The Value of x < y = "<<(x<y)<<endl;
    cout<<"The Value of x > y = "<<(x>y)<<endl;
    cout<<"The Value of x <= y = "<<(x<=y)<<endl;
    cout<<"The Value of x >= y = "<<(x>=y)<<endl<<endl<<endl;


    cout<<"Logical OPERATOR inm C++:"<<endl;
    cout<<"The logical Value of 'x == y' AND 'x != y' = "<<((x==y) && (x!=y))<<endl;  // This output is 0(False), Because one of the two condition is false so the over all value is False because we use the AND(&&) operator.
    cout<<"The logical Value of 'x != y' AND 'x < y' = "<<((x!=y) && (x<y))<<endl<<endl;  // This output is 1(True), Because two conditions is True so the over all value is True because we use the AND(&&) operator.
    
    cout<<"The logical Value of 'x == y' || 'x != y' = "<<((x==y) || (x!=y))<<endl<<endl;  // This output is 1(True), Because one of the two condition is True so the over all value is True because we use the OR(||) operator.

    cout<<"The logical Value of !(x == y) = "<<!(x==y)<<endl;  // This Gives 1(True) output but the condition 'x == y' is false , It will give true because we use the !(NOT) operator, As it will revert the output.
    return 0;
}
