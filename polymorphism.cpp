#include<iostream>
using namespace std;

class A{
    public:

    void sayhello(){
        cout<<"hello everyone :)"<<endl;
    }

    void sayhello(string name){
        cout<<"hello everyone :)"<<name<<endl;
    }

    int sayhello(int n){
        cout<<"HELLO EVERYONE :)"<<n<<endl;
        return 0;
    }


};

int main(){

A a;
a.sayhello();

    return 0;
}