#include <iostream>
#include <cmath>
using namespace std;

int clearIthBit(int num, int i /*position of bit*/)
{
    int bitmask =(~0)<<i;
    num = (num & bitmask);
    return num;
}

int clearIthBit1(int num, int i)
{
    return (num & ((~0) << i));
}

int main()
{
    cout << clearIthBit1(8, 4) << endl;  // * Ans : 0
    cout << clearIthBit1(12, 4) << endl; // * Ans : 0
    cout << clearIthBit1(16, 4) << endl; // * Ans : 16
    cout << clearIthBit1(17, 4) << endl; // * Ans : 16
    cout << clearIthBit1(15, 2) << endl; // * Ans : 12
}