#include<iostream>
using namespace std;
//int count = 0;
class desto{
    int a, b;
    static int count;
    public:
    desto(){
    count ++;
        cout<<"This is the time when my cons is called for obj no."<<count<<endl;
    }
    desto(int a1, int b1){
        a = a1;
        b = b1;
    }

    ~desto(){
        cout<<"This is the time when my destructor is called for obj no."<<count<<endl;
    }


};

int desto::count;
//driver program
int main(){
    cout<<"Entering int main()"<<endl;
    desto o1;
    {
        desto o2, o3;
        cout<<"Inside the block"<<endl;
    }
    cout<<"Back to main"<< endl;
    return 0;
}