#include <iostream>
using namespace std;

class Car
{
private:
    string name;
    int *milage;
    string color;

public:
    Car(string name, string color)
    {
        cout << "HI from constructor" << endl;
        this->name = name;
        this->color = color;
        this->milage = new int;
        *(milage) = 12;
    }

    Car(Car &c)
    {
        cout << "HI from Copy constructor" << endl;
        this->name=c.name;
        this->color=c.color;
        this->milage=new int;
        *(milage)=*(c.milage);
    }

    void info()
    {
        cout << this->name << endl;
        cout << this->color << endl;
        cout << *(milage) << endl;
    }

    ~Car()
    {
        // cout << "Destructor is special type of the function it's called automatically when the main function execution complete successfully. when main() function scope finished." << endl;
        // cout << "Destructor has same name as class name with ~ as prefix." << endl;
        // cout << "Destructor not have it's return type." << endl;
        // cout << "Destructor it's called only for once at deallocation of  the memory of the object." << endl;
        // cout<< "Destructor for the cleaning purpose of the memory uses after the object go out of the scope."<<endl;
        // cout << "if we not create any Destructor then compiler create it's own destructor for clean static memory only not clean dynamic memory allocation" << endl;
        // cout << "To deallocate Dynamically allocate memory we have to create our own destructor." << endl;

        cout << "Destructor called when main function scope is end." << endl;

        if (milage != NULL)
        {
            delete milage;
            milage = NULL;
        }
    }

    // Getters

    string getName()
    {
        return this->name;
    }

    string getColor()
    {
        return this->color;
    }

    int getMilage()
    {
        return *(milage);
    }

    // Setters

    void setName(string name)
    {
        this->name = name;
    }

    void setColor(string color)
    {
        this->color = color;
    }

    void setMilage(int mil)
    {
        *(milage) = mil;
    }
};

int main()
{

    Car c1("maruti 800", "black");
    // c1.info();
    Car c2("BMW", "red");
    Car c3("BMW", "Green");
    Car c4("BMW", "Golden");
    Car c5("BMW", "Silver");
    Car c6 = c1;
    c6.setMilage(10);
    cout << c1.getMilage() << endl;
    cout << c6.getMilage() << endl;
    return 0;
}