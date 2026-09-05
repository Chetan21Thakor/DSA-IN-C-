#include <iostream>
using namespace std;

bool isOddOrEven1(int num)
{
    bool isEven = false;
    int bitmask = 1;

    if (!(num & bitmask))
    {
        return isEven = true;
    }
    else
    {
        return isEven = false;
    }
}

bool isOddOrEven(int num)
{
    return (!(num & 1));
}

int main()
{
    cout << isOddOrEven(2) << endl;
    cout << isOddOrEven(3) << endl;
}