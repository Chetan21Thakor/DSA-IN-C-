#include<iostream>
using namespace std;

int main(){

   int a;
    a=10;

    int * ptr =&a;

    cout<< *ptr<<endl; //  "*" same like & used for many purpose in c++ * is also used for a many purpose in c++. it's used for a multiplication and also as Dereference Operator.

    *ptr=20;// a value changed from 10 to 20 using Pointer and * Operator
                        
    cout<< a <<endl;
    
    cout<< *ptr <<endl; // it's return the value at address.

}