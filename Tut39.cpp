#include<iostream>
using namespace std;

class Base{

    int a, b;

    protected:
    int c, d;

    public:
    int e = 10, f = 10;



};

class Deri : protected Base{

    //c = 10;

    int setValue(){
        c = 10; // can access the protected member c of base class.
        return c;
    }
};

int main (){

    Deri o1;
    cout<< o1.f << endl; // object of Derived class "Deri" can not access public member of DERIVED classes's Base class here coz deri is derived in protected visibility mode. public members of base are protected member in deri.
    //e = 10; can be accessed through 
}