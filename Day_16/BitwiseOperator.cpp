#include <iostream>
using namespace std;

int main()
{

    int a = 13; //* (13)=(00001101)
    int b = 25; //* (25)=(00011001)

    cout << a << " & " << b << " = " << (a & b) << endl;   //* Ans :(01001) ==> 9
    cout << a << " | " << b << " = " << (a | b) << endl;   //* Ans :(11101) ==>29
    cout << a << " ^ " << b << " = " << (a ^ b) << endl;   //* Ans :(10100) ==>20
    cout << a << " << " << b << " = " << (a << 2) << endl; //* Ans :(110100) ==>52
    cout << a << " >> " << b << " = " << (b >> 2) << endl; //* Ans :(110) ==>6
    cout << a << " ~ " << b << " = " << (~a) << endl;      //* Ans :-14
}