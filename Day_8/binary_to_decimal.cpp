#include <iostream>
using namespace std;

int binaryToDecimal(int binNum){
    int n=binNum;
    int pow=1;
    int decNum=0;

    while(n > 0){
        int lastDigit=n % 10;
        decNum+=lastDigit*pow;
        pow*=2;
        n/=10;
    }

    return decNum;
}


int main(){
     cout << binaryToDecimal(1011) << endl;
     return 0;
}