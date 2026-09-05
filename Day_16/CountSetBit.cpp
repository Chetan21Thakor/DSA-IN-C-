#include <iostream>
#include <cmath>
using namespace std;

int countSetBits(int num)
{
    int count = 0;

    while (num > 0)
    {
        int lastDigit = num & 1;
        count += lastDigit;
        num = num >> 1;
    }
    return count;
}

int main()
{
    cout << countSetBits(8) << endl;  // * Ans : 1
    cout << countSetBits(12) << endl; // * Ans : 2
    cout << countSetBits(16) << endl; // * Ans : 1
    cout << countSetBits(17) << endl; // * Ans : 2
    cout << countSetBits(7) << endl;  // * Ans : 3
    cout << countSetBits(15) << endl; // * Ans : 4
}