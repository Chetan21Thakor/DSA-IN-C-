#include<iostream>
using namespace std;

int main(){

    int x;

    int * ptr;

    x=7;
    ptr=&x; // Assign the address of x to ptr

    cout<<*ptr<<endl; // Output: 7
}