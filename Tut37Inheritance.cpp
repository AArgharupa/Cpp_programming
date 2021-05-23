#include <iostream>
using namespace std;

class Base
{

    int a; //private member
public:
    int b; //public member here

    Base(){} //default constructor

    Base(int b1)
    {
        b = b1;
    }

    Base(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
};
class Derived : Base
{ // default visibility mode is private
    
    int languageCode = 9;
    public :
    Derived(){}

    Derived(int a1){
        b = a1; //
        //a = 10; //Private member of class base
    }

    void printData(){

        cout << b << endl;

    }
};

class Derived2 : public  Base
{ // visibility mode is public means public members in class base is public in derived2 class.
    int languageCode = 9;
    public :
    Derived2(){}

    Derived2(int a1){
        b = a1; //
    }

    // void printData(){

    //     cout << b << endl;

    // }
};

int main()
{
    Base o1(1, 2), o2;
    Derived o11(2);
    Derived2 o(3);
    
    cout << o1.b << endl; //public member of Base class.
    o11.printData(); //Any object of class Derived cannot access b directly coz b is a private data member in class Derived. 
    cout<< o.b << endl; //b is public here so object o can directly access b.
}