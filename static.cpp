// static variabes == property of class also called class variables
//  only one copy is created and is maintained
//  is initialised by 0 by default.
//  scope and visibility is inside whole class

//static function can also be created similarly as static variables 
//it can be used without creating the object 

#include <iostream>
using namespace std;

class employee
{

public:
    int id;
    static int count; // declaration // initialised bu 0 by default

    void detail()
    {
        cout << "enter employee id : ";
        cin >> id;
        count++;
    }

    void outdet()
    {
        cout << "The emplyee id of employee number : " << count << " is " << id << endl;
    }

    static void showcount(void){
        cout<<"The value of count is : "<<count<<endl;
        //cout<<id; show an error as it does not have access to other than static variables 
    }

};

int employee ::count = 0; // initialisation;

int main()
{

    cout << employee ::count << endl;
    employee emp1, emp2, emp3;
    emp1.detail();
    emp1.outdet();
    employee :: showcount(); //no need to use obkject 

    emp2.detail();
    emp2.outdet();
    employee :: showcount();

    emp3.detail();
    emp3.outdet();
    employee :: showcount();

    return 0;
}