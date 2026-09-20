#include <iostream>
using namespace std;

class ParentClass
{

public:
    string name;
    int age;

    ParentClass(){};

    ParentClass(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void showInfo()
    {
        cout << "Name is :" << this->name << endl;
        cout << "age is :" << this->age << endl;
    }
};

class ChildClass : public ParentClass
{

public:
    ChildClass(){};

    ChildClass(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class GrandChildClass : public ChildClass{

public:
     GrandChildClass(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    ParentClass p1("Chetan", 28);
    ChildClass c1("Shivashi", 1);
    GrandChildClass g1("SHIVI",1);

    c1.showInfo();
    p1.showInfo();
    g1.showInfo();
    return 0;
}