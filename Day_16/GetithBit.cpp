#include <iostream>
#include <cmath>
using namespace std;

bool  getIthBit(int num, int i /*position of bit*/)
{
    // int bitmask = pow(2, i);
    // num = num>>i;

    // return ((num & 1));

     int bitmask = 1<<i;

    if(!(num & bitmask)){
        return 0;
    }else{
        return 1;
    }
}

bool getIthBit1(int num,int i)
{
    return ((num & (1<<i)));
}

int main()
{
    cout<<getIthBit(8,4)<<endl;
    cout<<getIthBit(12,4)<<endl;
    cout<<getIthBit(16,4)<<endl;
    cout<<getIthBit(17,4)<<endl;
}