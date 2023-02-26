#include <iostream>
using namespace std;

class bankaccount
{

    float principalamount;
    int rateinpercent;
    float rate;
    int years;
    float returnval;

public:
    bankaccount(){};
    bankaccount(float p, int r, int y);
    bankaccount(float p, float r, int y);
    void showdata();
};

bankaccount ::bankaccount(float p, float r, int y)
{
    principalamount = p;
    rate = r;
    years = y;

    returnval = 0;
    for (int i = 0; i < years; i++)
    {
        returnval = returnval* (1 + rate);
    }
}
bankaccount ::bankaccount(float p, int r, int y)
{
    principalamount = p;
    rate = float(r) / 100; // typecasting
    years = y;

    returnval = 0;
    for (int i = 0; i < years; i++)
    {
        returnval = returnval* (1 + rate);
    }
}

void bankaccount ::showdata()
{
    cout << "The total money you will be getting after " << years << "years"
         << " is " << returnval << endl;
}

int main()
{

    bankaccount b1, b2, b3;
    float p;
    int r;
    float R;
    int y;
    char method;

    cout<<"Enter the principal amount "<<endl;
    cin>>p;
    cout<<"For how long you want to keep your money with us "<<endl;
    cin>>y;
    cout<<"In what way you want to enter your expected rate:"<<endl<<" in percentage ->p "<<endl<<"in decimals ->n"<<endl;
    cin>> method;
    if(method == 'p'){
        cout<<"enter the interest rate"<<endl;
        cin>>R;
        b1 = bankaccount(p,R,y);
    }
    else {
        cout<<"enter the interest rate"<<endl;
        cin>>r;
         b1 = bankaccount(p,r,y);
    }

   b1.showdata();
   

    return 0;
}