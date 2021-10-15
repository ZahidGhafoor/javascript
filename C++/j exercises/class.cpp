#include <iostream>
using namespace std;

class Animal
{

private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int a2, int a3){
         a = a1;
         b = a2;
         c = a3;
    };

    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

// void Animal ::setData(int a1, int a2, int a3)
// {
//     a = a1;
//     b = a2;
//     c = a3;
// }

int main()
{

    Animal Camel;
    Camel.d = 32;
    Camel.e = 566;
    Camel.setData(1, 2, 3);
    Camel.getData();

    return 0;
}
