#include<iostream>
using namespace std;

void sayHello() {
    cout << "Hello :)" << endl;
}

void assistance() {
    sayHello();
    cout << "work done" << endl;
}

int main () {
    assistance();
    return 0;
}