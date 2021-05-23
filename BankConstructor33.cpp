#include <iostream>
using namespace std;

class Bank
{
    int principal;
    double rate;
    int time;
    double returnValue;

public:
    Bank(){}
    
    Bank(int, int, int);
    
    Bank(int p, int year, float r){
    principal = p;
    time = year;
    rate = r;

    returnValue = principal;
    for(int i = 1; i<=time; i++){
        returnValue = returnValue * (1 + rate);
    }
    cout<<"ConstructorFloat"<<endl;
}
    void show()
    {
        cout << "Principal was " << principal
             << ". The return value was: " << returnValue << endl;
             cout<<"Show"<<endl;
    }
};

Bank :: Bank(int p, int year, int r)
    {
        principal = p;
        time = year;
        rate = double(r) / 100;

        returnValue = principal;
        for (int i = 1; i <= time; i++)
        {
            returnValue = returnValue * (1 + rate);
        }
        cout<<"ConstructorInt"<<endl;
    }

int main()
{
    int p;
    int rInt;
    float Rf;
    int t;
    cout<<"Hello"<<endl;
    // Bank o1(1000, 0.04, 1), o2(1000, 4, 1);
    // // o1 = Bank(1000, 0.04, 1);
    // // o2 = Bank(1000, 4, 1);
    // o1.show();
    // o2.show();
    
    Bank oInt, oFloat;
    

    cout<<"Enter the value of p, t, r in int"<<endl;
    cin>>p>>t>>rInt;
    oInt = Bank (p, t, rInt);
    //Bank oInt(p, t, r);
    oInt.show();

    cout<<"Enter the value of p, t, R in float "<<endl;
    cin>>p>>t>>Rf;
    oFloat = Bank (p, t, Rf); //Dynamic initilization of objects
    //Bank oFloat(p, t, R);
    oFloat.show();

    

}