#include<iostream>
using namespace std;

int main(){

    int a;
    a=10;
    
    int * ptr =&a; // Pointer is Special type of the variable which store the memory address of the another variable. it's take 8 byte space.

    cout<< &a <<" = "<<ptr<< endl;
    cout<<sizeof(ptr)<<endl;
}