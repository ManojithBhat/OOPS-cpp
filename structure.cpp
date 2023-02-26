#include <iostream>
using namespace std;

// this program demonstrate the difference beween c and c++ structrure using c++ structure program 

struct A
{
    static int c; // can use static keyword in c++
    int a;
    int b;
    int d = 0; // direct iniitialize is possible in c++ 

    void input(int x, int y)
    { // can use member function in c++
        a = x;
        b = y;
    }

    void display()
    {
        cout << a << " " << b << endl;
    }

    A(){                        // concept of constructor exist in c++; 
       cout<< "default constructor called "<<endl;   
    }
};

struct B {};

int A ::c = 0;

int main()
{
    cout << A ::c << endl;
    A a1, b1; // struct word is not required is not required to declare struct type variables
    cout << A ::c << endl;
    a1.input(3, 4);
    a1.display();
    cout << sizeof(b1)<<endl;

    B b2;
    cout<<sizeof(b2);   //sizeof operator will generate 1 for empty structure whereas in c it will generate 0
                        
    return 0;
}