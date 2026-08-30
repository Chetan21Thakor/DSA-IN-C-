
#include <iostream>
using namespace std;

int largestOfThree(int a, int b, int c)
{

    int largest;

    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
    return largest;
}

int main()
{

    int a, b, c;

    cout << "Enter a : " << endl;
    cin >> a;

    cout << "Enter b : " << endl;
    cin >> b;

    cout << "Enter c : " << endl;
    cin >> c;

    cout << "Largest of " << a <<" "<< b <<" "<< c << " is :" << largestOfThree(a, b, c);
}