#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{

    double a, b;

public:
    void setSimpleData(double a1, double b1)
    {
        a = a1;
        b = b1;
    }

    double add()
    {
        return a + b;
    }
    double minus()
    {
        return a - b;
    }
    double divition()
    {
        return a / b;
    }
    double multiplication()
    {
        return a * b;
    }
};
class ScientificCalculator
{

    double c, d;

public:
    void setScientificData(double c1, double d1)
    {
        c = c1;
        d = d1;
    }

    double sign()
    {
        return sin(c);
    }
    double cosine()
    {
        return cos(c);
    }
    double logarithm()
    {
        return log(c);
    }
    double power()
    {
        //cout << "The power is: " << endl;
        return pow(c, d);
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    public:
    void display()
    {
        cout << "The result is: " << endl;
    }
};

int main()
{

    HybridCalculator o1;

    // o1.setSimpleData(4, 2);
    // o1.setScientificData(4, 2);
    double a, b;
    cout << "Enter the values of two numbers: " << endl;
    cin >> a >> b;
    // scanf("%f%f", &a, &b);
    o1.setSimpleData(a, b);
    o1.setScientificData(a, b);
    cout<< "The scientific result is: "<<endl;
    o1.display();
    cout << o1.power() << endl;
    o1.display();
    cout << o1.logarithm() << endl;
    o1.display();
    cout << o1.sign() << endl;
    o1.display();
    cout << o1.cosine() << endl;
    cout<< "The simple result is: "<<endl;
    o1.display();
    cout << o1.add() << endl;
    o1.display();
    cout << o1.minus() << endl;
    o1.display();
    cout << o1.divition() << endl;
    o1.display();
    cout << o1.multiplication() << endl;
}