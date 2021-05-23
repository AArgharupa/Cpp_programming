#include <iostream>
#include <math.h>
using namespace std;

//this is the class
class Points
{

    int x, y; // The coordinates

public:
    Points(int, int); //Paarametarized costructor
    friend void distanceBetweenTwoPoints(Points, Points);
    //constructor overloading
    Points(void)
    { //default constructor
        x = 10;
        y = 20;
    }

//     Points(int a)
//     { //parametarized constructor
//         x = a;
//         y = 0;
//     }
// };

//defination of the constructor
Points ::Points(int a, int b)
{
    x = a;
    y = b;
}

void distanceBetweenTwoPoints(Points p1, Points p2)
{
    if (p1.x == p2.x && p1.y == p2.y)
    {
        cout << "The distance between the two pionts is: 0" << endl;
    }
    else
    {

        int diff1 = p1.x - p2.x;
        int diff2 = p1.y - p2.y;
        double distance = sqrt(pow(diff1, 2) + pow(diff2, 2));
        cout << "The distance between the two pionts is: " << distance;
    }
}

int main()
{
    int a1, b1;
    int a2, b2;
    cout << "Enter point 1: " << endl;
    cin >> a1 >> b1;
    cout << "Enter point 2: " << endl;
    cin >> a2 >> b2;
    Points p1(a1, b1);
    Points p2(a2, b2);
    distanceBetweenTwoPoints(p1, p2);
    Points p3(2, 3);
    return 1;
}