#include <iostream>
using namespace std;

class Parent
{

public:
    virtual void show()
    {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent
{

public:
    void show()
    {
        cout << "Child class" << endl;
    }
};

int main()
{
    Parent p1;
    p1.show();
    Child child1;
    child1.show();

    Parent *ptr = &child1;
    ptr->show();
    
    return 0;
}