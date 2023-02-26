#include<iostream>
using namespace std;

// forward decalration 
class complex; // saying that complex class do exist 

class calculator {
    public:

int realcalc(complex o1,complex o2 );// only decalring here and not defining 

int compcalc(complex o1,complex o2);

};


class complex {
    private:

    friend int calculator :: realcalc(complex o1,complex o2);
    friend int calculator :: compcalc(complex o1,complex o2);
    
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
int calculator ::  realcalc(complex o1,complex o2){
        return (o1.x + o2.x);
    }

int calculator :: compcalc(complex o1,complex o2){
    return (o1.y + o2.y);
}


int main(){

    complex c1,c2;
    calculator t;
    c1.getall(4,5);
    c2.getall(6,8);
    int result1 = t.realcalc(c1,c2);
    cout<<result1<<endl ; 
    int result2 = t.compcalc(c1,c2);
    cout << result2;

return 0;
}