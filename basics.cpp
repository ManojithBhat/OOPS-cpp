#include<iostream>
#include<string.h>
using namespace std;
#define MACRO 5

#define MAX(a,b)  if(a>b) { cout<<a<<" is greater "<<endl;}  else {cout<<b<<"is greater "<<endl;} /



int main(){

char name[]="its all about cahrecter ";
char example = 'c';
char *result = strchr(name,example);
cout<<result<<endl;

char example1[] = "all";
char *result1 = strstr(name,example1);

cout<<result1<<endl;

#ifdef  MACRO 

cout<<sizeof(int)<<"\n";  
cout<<sizeof(float)<<"\n";
cout<<sizeof(bool)<<"\n";
cout<<sizeof(double)<<"\n";
cout<<sizeof(char)<<"\n";

#else

cout<<"date is "<<__DATE__<<endl;
cout<<"time is "<<__TIME__<<endl;
cout<<"line number is "<<__LINE__<<endl;
cout<<"file is "<<__FILE__<<endl;
cout<<"stdc is "<<__STDC_HOSTED__<<endl;

#endif

#undef MACRO



}