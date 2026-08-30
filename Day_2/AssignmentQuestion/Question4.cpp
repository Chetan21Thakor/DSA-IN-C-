#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.14

float areaCircle(int r)
{
    float areaCircle = PI * r * r;
    return areaCircle;
}

int main()
{
    int radius;

    cout << "Enter the Radius of the Circle : " << endl;
    cin >> radius;

    cout << "Area of the Circle is : " << areaCircle(radius) << endl;
}