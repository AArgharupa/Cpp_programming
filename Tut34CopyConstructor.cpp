#include<iostream>
using namespace std;

class Copy{

    int a;
    float b;

    public:
    Copy(){}
    Copy(int data1){
        a = data1;
    }
    Copy(int data1, int data2){
        a = data1;
        b = data2;
    }

    //Copy constructor which takes reference to an object as a formal argument
    Copy(Copy &obj){
        a = obj.a;
        b = obj.b;
        cout<< "Copy constructor is called!!!!"<<endl;
    }
    void display(){
        cout<<"a = "<<a<<" b = "<<b<<endl;

    }

};

int main(){
    Copy o1(1, 2), o2(10, 30), o3;
    o3 = o1; //Copy constructor won't be called as the object is alreaduy created using default constructor
    Copy o4 = o1; //Copy constructor will be invoked !! as the object is created in this line
    o3 = Copy(o1); //This will also call copy constructor as we are passing an object as a parameter
    o1.display();
    o2.display();
    o3.display();
    o4.display();


}