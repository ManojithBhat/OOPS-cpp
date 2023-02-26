#include<iostream>
using namespace std;

//forward declaration 
class B;

class A{
    int x;
    friend void swapnum(A & , B &);
    public: 
    void getdata(int a){
        x = a; 
    }

    void display(){
        cout<< x<<endl;
    }
};

class B{
    friend void swapnum(A & , B &);
    int y;
    public: 
    void getdata(int b){
        y = b; 
    }

    void display(){
        cout<< y<<endl;
    }
};

void swapnum(A &a , B &b){
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}


int main(){

    A a1;
    B b1;

    a1.getdata(5);
    b1.getdata(6);
    swapnum(a1,b1);

    cout << "the value of x: "<<endl;
    a1.display();
    cout<< " the value of y :"<<endl;
    b1.display();

return 0;
}