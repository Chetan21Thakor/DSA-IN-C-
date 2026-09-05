#include <iostream>
#include <cmath>
using namespace std;

int fastExponentiation(int num, int pow)
{
    int ans = 1;

    while (pow > 0)
    {
        int lastDigit = pow & 1;

        if (lastDigit)
        {
            ans = ans * num;
        }
        num = num * num;

        pow = pow >> 1;
    }
    return ans;
}

int main()
{
    cout << fastExponentiation(8,2) << endl;  // * Ans : 64
    cout << fastExponentiation(12,2) << endl; // * Ans : 144
    cout << fastExponentiation(2,5) << endl; // * Ans : 32
    cout << fastExponentiation(3,5) << endl; // * Ans : 243
}