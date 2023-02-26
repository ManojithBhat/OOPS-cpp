#include<iostream>
using namespace std;

class Human{

public:
int age;
int weight;

public:
void speaking(){
    cout<<"speaking"<<endl;
}


};

class Dog : public Human{

};

class Bulldog : public Dog{

};

int main(){

    Bulldog ramu;
    ramu.speaking();

    return 0;
}