#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    string color;
    int *milage;

    Car(string name, string color)
    {
        this->name = name;
        this->color = color;
        this->milage = new int;
        *milage = 12;
    }

    Car(Car &source)
    {
        this->name = source.name;
        this->color = source.color;
        this->milage = new int;
        *(this->milage) = *(source.milage);
    }
};

int main()
{
    Car c1("BMW", "black");
    Car c2(c1);

    cout << c2.name << endl;
    cout << c2.color << endl;
    cout << *(c2.milage) << endl;

    *c2.milage = 10;
    cout << *(c2.milage) << " != ";
    cout << *(c1.milage) << endl;

    return 0;
}