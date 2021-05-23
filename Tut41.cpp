#include <iostream>
using namespace std;

class Base1
{

    int data1;

protected:
    int data2;

public:
void setData1(int a){
    data1 = a;
}
Base1(){
  //  data1 = 10;
    data2 = 20;
    data3 = 30;
}
    int data3;
};

class Base2
{

    int data4;

protected:
    int data5;

public:
void setData4(int a){
    data4 = a;
}
Base2(){
   // data4 = 10;
    data5 = 20;
    data6 = 30;
}
    int data6;
};

class derived : public Base1, public Base2{

    int data7;

    protected:
    int data8;
    public :
    int data9;
    void setData7(int a){
    data7 = a;
}
    derived(){
   // data7 = 10;
    data8 = 20;
    data9 = 30;
}
    void show (){

        cout<< "The value of data2 "<< data2<<endl;
        cout<< "The value of data3 "<< data3<<endl;
        cout<< "The value of data5 "<< data5<<endl;
        cout<< "The value of data6 "<< data6<<endl;
        cout<< "The value of data7 "<< data6<<endl;
        cout<< "The value of data8 "<< data8<<endl;
        cout<< "The value of data9 "<< data9<<endl;
        cout<< "The sum is:" << data2 + data3 + data5 + data6 + data7 + data8 + data9<<endl;
    }


};

int main(){
    derived o1;
    o1.setData1(10);
    o1.setData4(40);
    o1.setData7(70);
    o1.show();

    
}