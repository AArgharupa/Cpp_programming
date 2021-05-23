#include<iostream>
using namespace std;


class Base{


    int data1;
    int data2;
    public:
    int data = 10; //
    Base(){}
    void setData();
    int getData1();
    int getData2();

    

};

void Base :: setData(){
    data1 = 10;
    data2 = 20;
}

int Base :: getData1(){
    return data1;
}
int Base :: getData2(){
    return data2;
}

class Derived1 : public Base{
    int data3;
    public:
    Derived1(int data){
        data3 = data;
    }
    void process();
    void display();
};

void Derived1 :: process(){

  //  data3 = getdata1() * getData2(); //as data1 and data2 are private.

}

void Derived1 :: display(){
    // cout << " Data1 : " << data1;
    // cout << " Data2 : " << data1;//data1 is private!
    // cout << " Data3 : " << data1;
}

int main (){

    Base o1;
    Derived1 o2(30);

    o1.setData();
    cout<< o2.data;


}