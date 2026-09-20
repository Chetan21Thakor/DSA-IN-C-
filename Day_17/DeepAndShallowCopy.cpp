#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    string color;
    int *milage;
    int n;

    Car(string name, string color)
    {
        this->name = name;
        this->color = color;
        this->milage = nullptr;
        this->n = 0;
    }

    void listOfMilage(int *arr, int n)
    {
        delete[] milage;

        this->n = n;
        
        milage = new int[n];

        for (int i = 0; i < n; i++)
        {
            milage[i] = arr[i];
        }
    }

    void showlistOfMilage()
    {
        for (int i = 0; i < n; i++)
        {
            cout << " " << milage[i] << endl;
        }
    }

    // Shallow Copy
    // Car(Car &source)
    // {
    //     this->name = source.name;
    //     this->color = source.color;
    //     this->milage = source.milage;
    // }

    // Deep Copy
    Car(const Car &source)
    {
        this->name = source.name;
        this->color = source.color;
        this->n = source.n;
        this->milage = new int[this->n];

        for (int i = 0; i < this->n; i++)
        {
            this->milage[i] = source.milage[i];
        }
    }

    ~Car()
    {
        delete[] milage;
    }
};

int main()
{
    Car c1("BMW", "black");
    int listMilage[] = {10, 12, 13, 23};
    c1.listOfMilage(listMilage, 4);

    Car c2(c1);
    cout << c2.name << endl;
    cout << c2.color << endl;
    c2.showlistOfMilage();

    c2.milage[0] = 99;
    cout << "c1 first value: " << c1.milage[0] << endl;
    cout << "c2 first value: " << c2.milage[0] << endl;

    return 0;
}