#include <iostream>
using namespace std;

class complex
{

private:
    int real = 0;
    int imag = 0;

public:
    complex()
    {
        // default constructor
        real = 0;
        imag = 0;
    }

    complex(int a = 0, int b = 0)
    {
        // paramaterized constructor
        real = a;
        imag = b;
    }

    void printcomplex()
    {
        cout << "the complex number is :" << real << " + " << imag << "i" << endl;
    }

    // operator overloading of + (binary operator )

    // return type
    complex operator+(complex a)
    {
        complex temp(0, 0);
        temp.real = real + a.real; // real is equal to obj1 when passed
        temp.imag = imag + a.imag;

        return temp;
    }
};

int main()
{

    complex obj(3, 4);
    obj.printcomplex();

    complex obj1(1, 2);
    complex obj2(3, 4);
    complex obj3(0, 0);
    

    obj3 = obj1 + obj2; // equivalent to obj1.operator+(obj2)
                        // as the return type is object it can be operated to object 3;

    obj3.printcomplex();

    return 0;
}