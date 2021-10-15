/*
    CONSTANTS Variables:
        In C++ the Constants is use to make non changed Variable . The Constants is used, if we want the value of a variable can't be chage mistelly. (We use Constants because, while code a big program we do many mistkes as also we changed the values of variables Excidently).
        EG. (int a = 5;) ---> Simple Variable (The Value may change by programer or Mistakenly)   |||     (const int a = 5;) ----> Constant Variable (The Value can't be change Mistakenly or also by Programer in some case).


    MANIPULATORS:
        Manipulators are used to change formatting parameters on streams and to insert or extract certain special characters. Manipulators are functions specifically designed to be used in conjunction with the insertion (<<) and extraction (>>) operators on stream objects.
        This is used for Write Justified forms.
        For Example :- 'endl;' (used to add new line)    &    setw(x); (used to Field width x is given width, & also this Manipulator is extracted from '<iomanip>' Header File).


    OPERATER PRECEDENCE:
        Operator precedence specifies the order of operations in expressions that contain more than one operator. Operator associativity specifies whether, in an expression that contains multiple operators with the same precedence, an operand is grouped with the one on its left or the one on its right.
        To chek the Operator Precedency use the chart on this recomanded website = https://en.cppreference.com/.

*/

#include<iostream>
using namespace std;

#include<iomanip>     // This Header File is Extracted for the "setw" Manipulator.

int main(){

    cout<<"CONSTANTS:\n";
    int a = 45;
    cout<<"The Value of Simple Variable 'A' is = "<<a<<endl;
    a = 50;
    cout<<"The Value of Simple Variable 'A' After Changed is = "<<a<<endl;
    cout<<endl;

    const int c = 100;
    const float pi = 3.14;
    cout<<"The Value of Constant Variable is = "<<c<<endl;
    cout<<"The Value of Constant Variable PI is = "<<pi<<endl;
    // c = 200;  // This will give error, because here we are going to change the value of a Constant Variable, Which is not possible.
    cout<<endl<<endl;


    int j = 50, k = 100, l = 5555;
    cout<<"MANIPULATORS:\n";
    cout<<"The Value of 'J' without SETW(Manipulator) = "<<j<<endl;
    cout<<"The Value of 'K' without SETW(Manipulator) = "<<k<<endl;
    cout<<"The Value of 'L' without SETW(Manipulator) = "<<l<<endl;
    cout<<endl;       
    
    cout<<"The Value of 'J' with SETW(Manipulator) = "<<setw(5)<<j<<endl; // This will increase the field width by 4.
    cout<<"The Value of 'K' with SETW(Manipulator) = "<<setw(5)<<k<<endl;
    cout<<"The Value of 'L' with SETW(Manipulator) = "<<setw(5)<<l<<endl;
    cout<<endl<<endl;


    int x = 10, y= 5;
    cout<<"OPERATOR PRECEDENCY:\n";
    cout<<"The Expression of ( 4*X + Y - X + X ) Withot Precendency = "<<4*x+y-x+x<<endl; // This Expression is done by the Operator Precedency, 1 st the Associativity of '*' is high so the multiply is done first, then there is only '+' & '-' operators in the expression, So, according to the Precedency Left to Right Associativity is Applied. 
    cout<<"The Expression of ( 4*X + Y - X + X ) With Precendency = "<<((((4*x)+y)-x)+x)<<endl; // The Above Percedency is done by this way of Expression. 
    

    return 0;
}
