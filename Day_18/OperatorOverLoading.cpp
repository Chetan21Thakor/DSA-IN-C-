#include <iostream>
using namespace std;

class ComplexNumber
{
    int real;
    int img;

public:
    ComplexNumber()
    {
    }
    ComplexNumber(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    ComplexNumber operator+(ComplexNumber &c2)
    {
        ComplexNumber c3;
        c3.real = this->real + c2.real;
        c3.img = this->img + c2.img;

        return c3;
    }

    ComplexNumber operator-(ComplexNumber &c2)
    {
        ComplexNumber c3;
        c3.real = this->real - c2.real;
        c3.img = this->img - c2.img;

        return c3;
    }

    void showComplexNum()
    {
        cout << "Complex Number is : " << this->real << " + " << this->img << "i ." << endl;
    }
};

int main()
{

    ComplexNumber c1(2, 7);
    c1.showComplexNum();
    ComplexNumber c2(1, 4);
    c2.showComplexNum();
    ComplexNumber c3 = c1 - c2;
    
    c3.showComplexNum();
    return 0;
}