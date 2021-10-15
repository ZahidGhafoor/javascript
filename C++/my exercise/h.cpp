#include <iostream>
using namespace std;

class Animal
{
private:
    int a, b, c;

public:
    int d, e;

    void specs2(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    };

    void specs()
    {
        cout << "The value of a " << a << endl;
        cout << "The value of b " << b << endl;
        cout << "The value of c " << c << endl;
        cout << "The value of d " << d << endl;
        cout << "The value of e " << e << endl;
    }
};

int main()
{
    Animal Monkey;
    Monkey.d = 19.22;
    Monkey.e = 78;

    Monkey.specs2(76,98,45);

    Monkey.specs();

    return 0;
}