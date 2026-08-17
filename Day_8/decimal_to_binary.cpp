#include <iostream>
using namespace std;

int decimalToBinary(int decNum){

    int n=decNum;
    int binNum=0;
    int pow = 1;

    while(n>0){
        int reminder= n % 2;
        binNum+=reminder*pow;
        pow*=10;
        n/=2;
    }

    return binNum;
}

int main(){
      cout <<decimalToBinary(8)<< endl;
       
    return 0;
}