#include<iostream>
using namespace std;

union A{
    int a; // we can have only one field initialiser ;
    char b;
    float c; 
     
};

union B{};

int main(){
    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;
    A a1,*a2=&a1,a3;
    a1.a = 97;
    cout<<a1.a<<endl;
    cout<<a1.b<<endl;
    cout<<a1.c<<endl;

    cout<< a2->a<<endl;
    
    return 0;
}