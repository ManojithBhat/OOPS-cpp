#include<iostream>
using namespace std;

class Animal{
    public:
    int legs;
    int hands;
    string name;
    static char havelive;

    void getinfo1(int legs){
        this->legs = legs;
    }
    void getinfo2(int hands){
        this->hands = hands;
    }

    void getinfo3(string naam){
        name = naam;
    }

    void outputter(){
        cout<<"name of animal is : "<<name<<endl;
        cout<<"number of legs:"<<legs<<endl;
        cout<<"number of hands : "<< hands<<endl;
    }

    Animal(){

    cout<<"Default constructor"<<endl;

    }

    ~Animal(){
        cout<<"Destructor"<<endl;
    }

    Animal(string name,int legs ,int hands){
        cout<<"parametereized constructor"<<endl;
        this->name = name;
        this ->legs = legs;
        this -> hands = hands;
    }

    Animal (Animal &a){
        cout<<"copy constructor "<<endl;
        this->name = a.name;
        this->legs = a.legs;
        this->hands = a.hands;
    }




};

char Animal :: havelive = 'Y';


int main(){

    cout<<Animal :: havelive <<endl;
    

    Animal Dog;                //statically allocation 

    Dog.getinfo1(2);
    Dog.getinfo2(2);
    Dog.getinfo3("Ramu");

    Dog.outputter();

    //Animal *Cow = new Animal();  //Dynamically allocation

    Animal Cow("gowri",2,2);
    Cow.outputter();

    Animal Billi(Cow);
    Billi.outputter();

    Dog = Cow;
    Dog.outputter();










    return 0;
}