#include<iostream>
using namespace std;

//forward declaration
class c2;

class c1{

    int value; //private data by default
    friend void swap(c1 &, c2 &); //friend withthis class
    public:
    void setData(int val){
        value = val;
    }
    void display(c1 &o1){
        cout<< o1.value << endl;
    }


};

class c2{

    int value1;

    //friend void c1 :: display(c1 & );
    friend void swap(c1 &, c2 &);
    public:
    void setData(int val){
        value1 = val;
    }
    void display(c2 &o2){
        cout<< o2.value1 << endl;
    }

    
};

void swap(c1 &o1, c2 &o2){

    int temp = o1.value;
    o1.value = o2.value1;
    o2.value1 = temp;
    
}

int main(){

    c1 o1; c2 o2;

    o1.setData(14);
    o2.setData(15);
    o1.display(o1);
    o2.display(o2);
    swap(o1, o2);
    o1.display(o1);
    o2.display(o2);
   
    return 0;

}