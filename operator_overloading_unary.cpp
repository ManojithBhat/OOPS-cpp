#include <iostream>
using namespace std;

class weight
{
private:
    int Wt;

public:
    weight()
    {
        // default constructor
    }

    weight(int a)
    {
        Wt = a;
    }

    void printweight()
    {
        cout << "The weight is " << Wt << endl;
    }

    // unary operator overloading ( especially ++,--)
    //  this is compile time polymorphism aslo called static polymorphism
    void operator++()
    { // pre increament operator

        ++Wt;
    }

    void operator++(int)
    {
        Wt++; // post increament operator (use int inside arguement)//this cannot be used to assign to another object as it does not have class return type
    }

    weight operator--(int)
    {
        weight temp;
        temp.Wt = Wt++; // here the increamented weight is assigned to temp object
        return temp;
    }
};

int main()
{

    weight w1(25);
    w1.printweight();

    ++w1; // w1.operator++
    w1.printweight();

    w1++; // w1.operator++
    w1.printweight();

    weight w2;
    w2 = w1--;

    w2.printweight();

    return 0;
}