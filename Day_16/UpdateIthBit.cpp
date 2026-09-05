#include <iostream>
#include <cmath>
using namespace std;

int updateIthBit(int num, int i, int set)
{
    num = num & (~(1<<i));

    int bitmask = set << i;

    num = (num | bitmask);
    return num;
}

int updateIthBit1(int num, int i,int set)
{
    return (((num & (~(1 << i))) | set << i));
}

int main()
{
    cout << updateIthBit1(8,4,0) << endl;  // * Ans :8
    cout << updateIthBit1(12,4,0) << endl; // * Ans :12
    cout << updateIthBit1(16,4,0) << endl; // * Ans :0
    cout << updateIthBit1(17,4,0) << endl; // * Ans :1
}