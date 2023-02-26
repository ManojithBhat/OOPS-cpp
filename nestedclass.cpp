#include <iostream>
using namespace std;

#define PI 3.14

class AREA
{

public:
    float a;

    class circle
    {
    public:
        float x;
        circle(){}
        circle(float a)
        {
            x = a;
        }
        void calculatearea()
        {
            cout<<"the area of the cirle is "<< PI *x*x;
        }
    };
};

int main()
{

    AREA :: circle C1;
    C1 = AREA::circle(4.5);
    C1.calculatearea();


    return 0;
}