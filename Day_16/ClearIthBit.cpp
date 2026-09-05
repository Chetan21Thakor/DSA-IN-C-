#include <iostream>
#include <cmath>
using namespace std;

int clearIthBit(int num, int i /*position of bit*/)
{
    int bitmask1 = pow(2, i);
    bitmask1 = ~bitmask1;

    int bitmask = ~(1 << i);
    num = (num & bitmask1);
    return num;
}

int clearIthBit1(int num, int i)
{
    return (num & ~(1 << i));
}

int main()
{
    cout << clearIthBit(8, 4) << endl;  // * Ans : 8
    cout << clearIthBit(12, 4) << endl; // * Ans : 12
    cout << clearIthBit(16, 4) << endl; // * Ans : 0
    cout << clearIthBit(17, 4) << endl; // * Ans : 1
}