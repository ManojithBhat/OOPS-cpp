#include <iostream>
using namespace std;
int x = 200;

void function();

int main()
{
    function();
    return 0;
}

void function()
{
    class A
    {
    public:
        int x = 45;

        void print()
        {
            cout << "the global variable x is " << ::x << endl;
            cout << "the local variable x is " << x << endl;
        }
    };

    class B : public A
    {
    public:
        int b;
        B(){};
        B(int w, int y)
        {
            A::x = w;
            b = y;
        }
        void add()
        {
            cout << "the sum is " << A::x + b << endl;
        }
    };
    A a1;
    a1.print();
    B b1(5, 9);
    b1.add();
}