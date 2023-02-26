#include<iostream>
using namespace std;

class complex {
    private:
    friend complex add(complex o1,complex o2);
    int x,y;
    public:
    void getall(int a, int b){
        x = a;
        y = b;
    }

    void display(){
        cout << x <<"+"<< y <<"i"<<endl;
    }
};


complex add(complex o1,complex o2){
    complex o3;
    o3.getall ((o1.x+o2.x),(o1.y+o2.y));
    return o3;
}

int main(){
    complex c1,c2,c3;
    c1.getall(4,5);
    c2.getall(6,7);
    c3 = add(c1,c2);
    c3.display();


return 0;
}

/* properties of friend function 
1.not in the scope of class 
2.since it is not in the scope of the class, it cannot be called from the objects 
of the class c1.add() == invalid 
3.can be invoked without help of any object 
4. usually contains the objects as an arguements 
5.can be declared inside public or private section of the class






*/
