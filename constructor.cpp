#include<iostream>
using namespace std;

class Construct{
    int a;
    int b;

    public:
    Construct(void); // has no return type & default consructor as it takes no value
    void display(Construct o1){
        cout<< o1.a << " + "<< o1.b<< "i"<<endl;
        
    }
    void setData(int a1, int b1){
        a = a1;
        b = b1;
    }
};


Construct :: Construct(void){

    a = 10;
    b = 12;
}


int main(){

    Construct o1;
    o1 = Construct();
    // o1.setData(2, 3);
    o1.display(o1);
}
