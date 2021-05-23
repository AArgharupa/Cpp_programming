//Virtual Base Class
#include <iostream>
using namespace std;

/*

Female --> Mfitness[done]
Female --> Pfitness[done]
Pfitness --> Fitness
Mfitness --> Fitness

*/

class Female {

    protected:
    int nameCode;
    public:
    void setNameCode(int a1){
        nameCode = a1;

    }
};


class Mfitness : virtual public Female{
    protected:
int laughingtime;
public:
void setLaughingTime(int b1){
    laughingtime = b1;

}
void printLaughingTime(){
    cout<< "The Laughing time of "<< nameCode << " is "<< laughingtime<<endl;
}

};

class Pfitness :virtual public Female{
    protected:
int joggingtime;
public:
void setJoggingTime(int c1){
    joggingtime = c1;

}
void printJoggingTime(){
    cout<< "The jogging time of "<< nameCode << " is "<< joggingtime<<endl;
}

};
class Fitness: public Mfitness, public Pfitness{
    protected:
    int score;
    public:
    void display(){
        cout<< "The score is: "<< laughingtime + joggingtime<<endl;
    }
};

int main(){
    Fitness o1;
    o1.setNameCode(20); //if Female is not a virtual base class for Mfitness and Pfitness, the function setNameCode for the derived class fitness is ambiguous as it is derived frion both mFitness anf Pfitness.
    o1.setLaughingTime(12);
    o1.setJoggingTime(10);
    o1.printJoggingTime();
    o1.printLaughingTime();
    o1.display();
}



