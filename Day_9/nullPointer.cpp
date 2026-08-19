#include<iostream>
using namespace std;

int main(){
    int * ptr =NULL;
     // Null Pointer is special type of the Pointer which store a 0x0 memory location. it's used when we are creating pointer but we don't have valid memory address to store inside it. that time we initialize pointer with a value NULL .  "A Pointer which store Null value it's called a NULL Pointer."

    //  Null Pointer not storing a valid memory address so you can't can dereference it just because of the it's don't have valid memory address to store. It's used When we are don't want to store a garbage Memory address value inside Pointer.
    
    int *ptr2=0;

    cout<<ptr<<endl;
    cout<<ptr2<<endl;
}