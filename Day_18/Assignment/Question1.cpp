#include <iostream>
using namespace std;

class ComplexNumber
{

public:
    int real;
    int img;

    ComplexNumber() {};

    ComplexNumber(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    ComplexNumber operator-(ComplexNumber &c2)
    {
        ComplexNumber c3;

        c3.real = this->real - c2.real;
        c3.img = this->img - c2.img;

        return c3;
    }

    void showComplexNumber()
    {
        cout << "Complex Number is : " << this->real << " + " << this->img << "i " << endl;
    }
};

int main()
{
    ComplexNumber c1(5, 6);
    ComplexNumber c2(2, 3);
    ComplexNumber c3 = c1 - c2;
    c1.showComplexNumber();
    c2.showComplexNumber();
    c3.showComplexNumber();
    return 0;
}