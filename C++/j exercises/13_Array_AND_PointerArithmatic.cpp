 /*

        DEFINE ARRAY:
            An array is a collection of elements of the same type placed in contiguous memory locations that can be individually referenced by using an index to a unique identifier.
            EG. Five values of type int can be declared as an array without having to declare five different variables (each with its own identifier), arr[0], arr[1], arr[2], arr[3], arr[4].


        POINTER ARITHMATIC:
            Pointer Arithmatic is the way to fine the Value of a Array index using its Adress.

*/

#include<iostream>
using namespace std;

#include<iomanip>

int main()
{
    int a = 5;
    int marks [7] = {20, 35, 60, 75, 90, 100, 200};   // This is the way to make a Array. 
    int marks2 [] = {202, 355, 600, 755, 999, 10, 2};   // C++ is so intelligent it can atomaticlly finde the total intex that we etered witout figureout. like in this Statement. 

    cout<<"ARRAYS:\n";
    cout<<"Marks 1:"<<setw(7)<<marks[0]<<endl;
    cout<<"Marks 2:"<<setw(7)<<marks[1]<<endl;
    cout<<"Marks 3:"<<setw(7)<<marks[2]<<endl;
    cout<<"Marks 4:"<<setw(7)<<marks[3]<<endl;
    cout<<"Marks 5:"<<setw(7)<<marks[4]<<endl;
    cout<<"Marks 6:"<<setw(7)<<marks[5]<<endl;
    cout<<"Marks 7:"<<setw(7)<<marks[6]<<endl;
    cout<<endl;

    cout<<"ARRAY without Index:"<<endl;
    cout<<"Marks.2 1:"<<setw(7)<<marks2[0]<<endl;
    cout<<"Marks.2 2:"<<setw(7)<<marks2[1]<<endl;
    cout<<"Marks.2 3:"<<setw(7)<<marks2[2]<<endl;
    cout<<"Marks.2 4:"<<setw(7)<<marks2[3]<<endl;
    cout<<"Marks.2 5:"<<setw(7)<<marks2[4]<<endl;
    cout<<"Marks.2 6:"<<setw(7)<<marks2[5]<<endl;
    cout<<"Marks.2 7:"<<setw(7)<<marks2[6]<<endl;
    cout<<endl;

    marks2 [0] = 20202;
    marks2 [6] = 222;
    cout<<"Changing the Value of ARRAYs:\n";
    cout<<"Marks.2 1 (Changed):"<<setw(7)<<marks2[0]<<endl;
    cout<<"Marks.2 7 (Changed):"<<setw(7)<<marks2[6]<<endl;
    cout<<endl;

    cout<<"Print All ARRAYS with the Help of LOOP:\n";
    for (int i = 0; i < 4 ; i++)
    {
        cout<<"The Value of Marks ["<<i<<"] is :-"<<setw(7)<<marks[i]<<endl;
    }
    cout<<endl<<endl<<endl;
 


    int* p = marks;
    cout<<"POINTER ARITHMATICS (Pointer with Arrays):\n";
    cout<<"The Value at *p     (Marks[0]) is = "<<setw(7)<<*p<<endl;
    cout<<"The Value at *(p+1) (Marks[1]) is = "<<setw(7)<<*(p+1)<<endl;
    cout<<"The Value at *(p+2) (Marks[2]) is = "<<setw(7)<<*(p+2)<<endl;
    cout<<"The Value at *(p+3) (Marks[3]) is = "<<setw(7)<<*(p+3)<<endl;
    cout<<"The Value at *(p+4) (Marks[4]) is = "<<setw(7)<<*(p+4)<<endl;
    cout<<"The Value at *(p+5) (Marks[5]) is = "<<setw(7)<<*(p+5)<<endl;
    cout<<endl;

    int* m = marks2;
    cout<<"Another way to PointingParmanently (Advanced):\n";
    cout<<"The value of *M as *(M++) at Marks.2[0] is :- "<<setw(7)<<*(m++)<<endl;                      // In this Statement the Value of maks.2 [0] is shown and then Incrimented. // The Value od marks[0] is shown 20202, Because we change the Value in above Program.
    cout<<"The value of *(M+1) as *M (As the M is Incrimented at the above statement) at Marks.2[1] is :- "<<setw(7)<<*m<<endl;
    cout<<"The value of *(M+2) as *++M (As the M is Incrimented at the above statement and Now the M is Incrimented before print) at Marks.2[2] is :- "<<setw(7)<<*(++m)<<endl;

    return 0;
}


