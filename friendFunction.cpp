#include<iostream>
using namespace std;


class Calculator{
    int a, b;
    public:
    int div();
    void noWork();

};

class Friend{


    int a, b;

    public:
    friend int sum(Friend, Friend);
    friend int Calculator ::div(); // div function of calculator class can acesses Friend classes private data
    friend class calculator; // every function within calculator class can access Friend class's private data --> now calculator class and friend class is friend.
    void setData(int, int);
    void getData();
};

int Calculator ::div(){
    Friend o1, o2;
    o1.a= 2; // can access Friend classes private data
    return o1.a;
}

void Friend :: setData(int n1, int n2 ){
    a = n1;
    b = n2;

}

void Friend::getData(){
    cout<<a<<endl;
    cout<<b<<endl;
}


//friend function
int sum(Friend o1, Friend o2){
   return o1.a + o2.b;
}
//Driver code
int main(){
    Friend o1, o2;
    o1.setData(2, 3);
    o1.getData();
    o2.setData(5, 6);
    o2.getData();
    cout << sum(o1, o2);
}
