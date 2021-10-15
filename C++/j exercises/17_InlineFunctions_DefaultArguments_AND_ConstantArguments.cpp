/*
    DEFINE INLINE FUNCTIONS :
        C++ inline function is powerful concept that is commonly used with classes. 
        If a function is inline, the compiler places a copy of the code of that function at each point where the function is called at compile time.
            * Don't use the inline FUnction in Complex Functions, EG. Loops, With Static Variables, Incrimentation ETC. 
            *  Just use Inline Function for Simple Function, EG. SUM, PRODUCT ETC.


    DEFINE DEFAULT ARGUMENTS :
        The default arguments are used when you provide no arguments or only few arguments while calling a function. The default arguments are used during compilation of program. 
        For example, lets say you have a user-defined function sum declared like this: int sum(int a=10, int b=20), now while calling this function you do not provide any arguments,
          simply called sum(); then in this case the result would be 30, compiler used the default values 10 and 20 declared in function signature. 
        If you pass only one argument like this: sum(80) then the result would be 100, using the passed argument 80 as first value and 20 taken from the default argument.
            * Always Write The Actual Parameter\Arguments first in Main Fumction, So compile Can easily take the Second Argument as a Default. 


    DEFINE CONSTANT ARGUMENTS :
        The  const Arguments tells the compiler that the value of that argument cannot be modified or Changed accidently.
            * In User-Define Function Constant Arguments Mainly used in Reference Variables & Pointers Methods.

*/

#include<iostream>
using namespace std;

                    //      ***** INLINE FUNCTION *****
int product(int a, int b)
{
    return(a*b);
}

inline int product1(int a, int b)
{
    return(a*b);
}

                    // ***** STATIC VARIABLE *****
int add(int a, int b)
{
    static int c = -1;      // This Will Executes only once & then the Value of c is Stored For Next Executions.
    c = c + 1;              // Every time the Function is Execute the Value of C is Updated sue to STATIC Variable.
    return (a+b)+c;
}

                    // ***** DEFAULT ARGUMENTS *****
int currency(int dollar, int rs = 160)
{
    int c = dollar * rs;        // 'int rs = 160' is Default Argument.
    return c;
}

                    // ***** CONSTANT ARGUMENTS *****
int constargument(const int a)
{
    return 0;       // This is the Way to write the Constant Arguments Functions.
}

int main()
{
    int a = 40, b = 5;    
    cout<<"INLINE FUNCTION :\n";
    cout<<"The Value of 'A' ="<<a<<endl;
    cout<<"The Value of 'B' ="<<b<<endl;
    cout<<"The Product of 'A' & 'B' ="<<b<<endl;
    cout<<"The Product of 'A' & 'B' (WithOut Inline Function) = "<<product(a,b)<<endl;
    cout<<"The Product of 'A' & 'B' (WithOut Inline Function) = "<<product(a,b)<<endl;
    cout<<"The Product of 'A' & 'B' (WithOut Inline Function) = "<<product(a,b)<<endl;
    cout<<"The Product of 'A' & 'B' (WithOut Inline Function) = "<<product(a,b)<<endl;
    cout<<"The Product of 'A' & 'B' (WithOut Inline Function) = "<<product(a,b)<<endl<<endl;
                    // Without Inline Function this above simple program take a time on every same excuation.
                        // This will increase the excuation time on a simple program

    cout<<"The Product of 'A' & 'B' (With Inline Function) = "<<product1(a,b)<<endl;
    cout<<"The Product of 'A' & 'B' (With Inline Function) = "<<product1(a,b)<<endl;
    cout<<"The Product of 'A' & 'B' (With Inline Function) = "<<product1(a,b)<<endl;
    cout<<"The Product of 'A' & 'B' (With Inline Function) = "<<product1(a,b)<<endl;
    cout<<"The Product of 'A' & 'B' (With Inline Function) = "<<product1(a,b)<<endl;
                    // With Inline Function this above simple Program can excute one time and the store the ecuation Values for next same excuations.
                        //  This will reduce the excuation time and programe become more efficient.
    cout<<endl<<endl<<endl;



    int m , n;
    cout<<"STATIC VARIABLES :\n";
    cout<<"Enter the Value of 'M' & 'N' :\n";
    cin>>m>>n;
    cout<<"The Value of 'M' = "<<m<<endl<<"The Value of 'N' = "<<n<<endl;
    cout<<"The SUM of 'M' & 'N' = "<<add(m,n)<<endl;
    cout<<"The SUM of 'M' & 'N' With 1++ = "<<add(m,n)<<endl;
    cout<<"The SUM of 'M' & 'N' With 1++ = "<<add(m,n)<<endl;
    cout<<"The SUM of 'M' & 'N' With 1++ = "<<add(m,n)<<endl;
    cout<<"The SUM of 'M' & 'N' With 1++ = "<<add(m,n)<<endl;
    cout<<"The SUM of 'M' & 'N' With 1++ = "<<add(m,n)<<endl;
    cout<<endl<<endl<<endl;



    int s , r;
    cout<<"DEFAULT ARGUMENTS :\n";
    cout<<"Enter The Dollars = ";
    cin>>s;
    cout<<"Your Dollar Currency in PKR = "<<currency(s)<<endl;      // In this line we give only one one Actual Parameter So, the compile take the Default Argument From the user-define function.
    cout<<endl;

    r = 100;
    cout<<"Your Dollar Currency in PKR (If $ = 100) = "<<currency(s,r)<<endl;    // In this condition, If we add Both 2 Actual Parameters, So the Compiler Can't take Default Argument From User-Define Function (If it Have).
    
    cout<<"Your Dollar Currency in PKR (If $ = 110) = "<<currency(s,110)<<endl;    // Another way to Assing the Actual Arguments\Parameters.
    cout<<endl<<endl<<endl;



    cout<<"CONSTANT ARGUMENTS :\n";
    cout<<"The Constant Arguments is Not Briefly Explain Here, It Will Diccused Later.\nTo Check the Example of Constant Arguments See The Code.";

    return 0;
}

