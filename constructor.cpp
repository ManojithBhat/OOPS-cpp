#include<iostream>
using namespace std;
 class student {

private:
char grade;
float attendence;

public:
bool gender; //0 for male and 1 for female 
int roll;
string name;

///////////////////////////////////////////////////////
void printInfo(){
    
    cout<<"student name : "<<name<<endl;
    cout<<"student roll : "<<roll<<endl;
    cout<<"student gender : "<<gender<<endl;
    cout<<"student grade : "<<grade<<endl;
    cout<<"student attendence : "<<attendence<<endl;
}

void getthings(char g){
    grade = g;
}

void getattend(float a){
    attendence = a;
}
//////////////////////////////////////////////////////

student(string name, int r,bool g,char gr,float a ){
    cout<<"parameterized constructor"<<endl;
   this->name = name;           // this is the pointer which points the class //this method is used to avoid confusion 
    roll = r;
    gender = g;
    grade = gr;
    attendence = a;
}//parameterized constructor

student(){
    cout<<"default constructor"<<endl;
}//default constructor 


student(student &a){
    cout<< "copy constructor"<<endl;
    name = a.name;
    roll = a.roll;
    gender = a.gender;
    grade =a.grade;
    attendence= a.attendence;
}//copy constructor 
//default copy constructor does shallow copy

////////////////////////////////////////////////
//deep copy -- here a differently memory is allocated 

/*student(student &a){
    cout<<"copy constructor--deep copy"<<endl;
    char *ch = new char[strlen(a.name)+1];
    strcpy(ch,a.name);
    



}*/

~student (){
    cout<<"destructor called"<<endl;
}//destructor 

bool operator == (student &a){
    if(name == a.name && roll==a.roll && gender == a.gender){
        return true;
    }
    return false;
}//operator overloading


};


int main(){

//student arr[3];

/*for(int i=0;i<3;i++){
    char g;
    float a;
    cout <<"student name : "<<endl;
    cin>>arr[i].name;
    cout<<"student roll : "<<endl;
    cin>>arr[i].roll;
    cout << "student gender : "<<endl;
    cin>>arr[i].gender;
    cout<<"student grade (A,B,C) :"<<endl;
    cin>>g;
    arr[i].getthings(g);
    cout<<"student attendence percentage"<<endl;
    cin>>a;
    arr[i].getattend(a);

    
}

for( int i=0;i<3;i++){
    arr[i].printInfo();
}

*/
//student s1("Manojith", 34,0,'a',90);
//s1.printInfo();

// student s2;
// student s3 = s1;

// if(s1==s3)
// {
//     cout<<"same"<<endl;

// }
// else{
//     cout<<"not same"<<endl;
// }

student *a = new student;

cout<<"enter student name "<<endl;
cin>>(*a).name;
cout<<a->name;

student A("A",34,0,'A',9.8);
A.printInfo();

student B(A);
B.printInfo();





    return 0;
}