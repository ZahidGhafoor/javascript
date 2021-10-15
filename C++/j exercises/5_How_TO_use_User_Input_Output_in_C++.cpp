/*

Input & Output in C++:
              C++ Comes with libariers which helps us in performing input/output. In c++ sequence of bytes corresponding to input,output commonly known as streams(EG. IOSTREAM. 'IO' means input-Output).
                   Input Stream:
                         Direction of folow of bytes takes place from input device (EG. Keyboard etc) to the main memory is called input Stream.
                   Output Stream:
                         Direction of follow of bytes takes place from main menory to the output device (EG. Display) is called Output Stream.

*/

#include<iostream>
using namespace std;

int main(){
      int num1, num2;
    
    cout<<"User Input\n";
    
    cout<<"Enter Your 1st number:-  ";     // '<<' is called Insertion operator.
    cin>> num1;                           // '>>' is called Extraction operator.
    
    cout<<"Enter Your 2st number:-  ";
    cin>> num2;
    
    cout<<"Your SUM is:-  " << num1+num2;
    return 0;
}



