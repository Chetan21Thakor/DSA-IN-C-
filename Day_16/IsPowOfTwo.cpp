#include <iostream>
#include <cmath>
using namespace std;

bool isPowOf2(int num)
{
    int bitmask = num - 1;

    bool isPowOfTwo = false;

    if (!(num & bitmask))
    {
        return isPowOfTwo = true;
    }

    return isPowOfTwo;
}

bool isPowOf2_1(int num)
{
    return (!(num & (num - 1)));
}

int main()
{
    cout << isPowOf2_1(8) << endl;  // * Ans :1
    cout << isPowOf2_1(12) << endl; // * Ans :0
    cout << isPowOf2_1(16) << endl; // * Ans :1
    cout << isPowOf2_1(17) << endl; // * Ans :0
}