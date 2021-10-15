/* 
        SCOPE RESOLUTION:
            The Scope Resolution is a way to call a same assigned Global variable locally.

        FLOAT, DOUBLE & LONG DOUBLE LITERALS:
            Literals is the method to hardly assign the float, double & long double variables to Mechine.

        REFERANCE VERIABLE:
            Refarance Variable is use to point a same value with more Referance.
            In this way a variable have two assigned name without creating any copy.
            EG. float a = 55.5; ---------->  float & b = a;          // by this way a value 55.5 have two assigned names 'a' & 'b'.

        TYPE CASTING:
            To convert the variable to another is called TypeCasting.
            EG. To convert float (55.4) in to int ------> float a = 55.4; | <<int(a); OR <<(int)a;. It will give 55 output as a int , because int can't store decimelas values.

*/

#include<iostream>
using namespace std;

int b = 100;

int main(){
    int a, b, c;

    cout<<"SCOPE RESOLUTION:\n";
    cout<<"Enter The Value of A:- ";
    cin>>a;
    cout<<"Enter The Value of B:- ";
    cin>>b;
    cout<<"Enter The Value of c:- ";
    cin>>c;

    int d = a + b + c;
    cout<<"The Sum of the Three Values is = "<<d;
    cout<<endl<<endl;


                 // The programe is dealing with the local Veriable now. But if we wath to call the Global Variable and thare is also the same local variable assigned, So in this case we use the SCOPE RESOLUTION OPERATOR (::).
    cout<<"The Scope Resolution of a value:\n"; 
    cout<<"The Globale Vlue of B is = "<<::b<<endl;
    cout<<endl<<endl;
    

    float j = 20.5;
    long double k = 20.5;
    cout<<"LITERALS:\n";
    cout<<"The Value of Float is = "<<j<<endl;
    cout<<"The Value of Long Double is = "<<k<<endl;
                 // By defulat the 20.5 or 30.5 is a double, but if we want to assigned it as a FLOAT or LONG DOUBLE we use Literals Method, By denotion the values as we want EG. For Float (float a = 44.44f/F) ETC.
    float l = 30.5f;      // We can also written it as 20.5F.
    long double m = 30.5l;  // We can also written it as 20.5L.
    cout<<"The Value of Float litrale is = "<<l<<endl;
    cout<<"The Value of Long Double litrale is = "<<m<<endl<<endl;

    cout<<"Prof of the Literales:"<<endl;
    cout<<"The Size of 30.5 (as a Double) is = "<<sizeof(30.5)<<endl;
    cout<<"The Size of 30.5f (As a Float) is = "<<sizeof(30.5f)<<endl;
    cout<<"The Size of 30.5F (As a Float) is = "<<sizeof(30.5F)<<endl;
    cout<<"The Size of 30.5l (As a Long Double) is = "<<sizeof(30.5l)<<endl;
    cout<<"The Size of 30.5L (As a Long Double) is = "<<sizeof(30.5L)<<endl;
    cout<<endl<<endl;


    float x = 99.9;
    float & y = x;
    cout<<"REFERANCE VARIABLE:\n";
    cout<<"The Value of X = "<<x<<endl;
    cout<<"The Value of Y (Referance of X) = "<<y<<endl;  // The Original Variable is X.
    cout<<endl<<endl;


    float w = 550.34;
    cout<<"TypeCasting:"<<endl;
    cout<<"The Value of Float 'W' = "<<w<<endl;
    cout<<"The TypeCased Value of Float into Int is = "<<int(w)<<endl; // Also written as <<(int)a;
    cout<<endl;
    // AND also in this way:
    float r = 20.8;
    int s = int(r);
    cout<<"The Value of Float 'R'  = "<<r<<endl;
    cout<<"The TypeCased Value of Float 'R' into Int 'S' = "<<s<<endl;
    cout<<"\n";

    // More Examples:
    int u = 5;
    float v = 15.5;
    cout<<"The Expression of U + V =  "<<(u + v)<<endl;
    cout<<"The Expression of U + V =  "<<(u + int(v))<<endl;
    cout<<"The Expression of U + V =  "<<(u + (int)v)<<endl;
    return 0;  
}