#include <iostream>
using namespace std;

class GrandFather
{

    int brain;

public:
    //GrandFather(){} 
    GrandFather(void){ //takes no value this is the default constructer
        brain = 1;
        hair = 1;
        skin = 1;
    }
    int hair;
    int skin;

protected:
    int blood;
};

class Father : protected GrandFather
{

    int habits;

public:
    int love = 2;

protected:
    int values;
};

class Child : public Father  //multiple inheritance 
{
    int foodHabits;

public:
    int friends;

protected:
    int assignments;
};


int main (){

    GrandFather o;
    //o = GrandFather();

    cout<< o.hair<<endl;
    cout << o.skin<<endl;

    Child o1;

    cout << o1.love;

}