// TODO Assignment Question is complete

#include <iostream>
using namespace std;

float areaOfSquare(int sideOfSquare)
{

    float area = sideOfSquare * sideOfSquare;

    return area;
}

int main()
{

    int sideOfSquare;
    cout << "Enter The Side Of the Square : " << endl;
    cin >> sideOfSquare;

    cout << areaOfSquare(sideOfSquare);
}