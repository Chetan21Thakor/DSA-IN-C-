#include <iostream>
#include <cmath>
using namespace std;

int setIthBit(int num, int i /*position of bit*/)
{
    // int bitmask = pow(2, i);

    int bitmask = 1 << i;
    num = (num | bitmask);
    return num;
}

int setIthBit1(int num, int i)
{
    return (num | 1 << i);
}

int main()
{
    cout << setIthBit(8, 4) << endl;  // * Ans : 24
    cout << setIthBit(12, 4) << endl; // * Ans : 28
    cout << setIthBit(16, 4) << endl; // * Ans : 16
    cout << setIthBit(17, 4) << endl; // * Ans : 17
}