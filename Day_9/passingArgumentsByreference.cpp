#include<iostream>
using namespace std;


// Using a Pointer
void ChangeA(int * ptr){
    *ptr=20;
    cout<<*ptr<<endl;
}

//Using a Reference Variable
void ChangeA2(int &alias){
    alias=30;
    cout<<alias<<endl;
}

int main(){

    int a;
    a=10;
    cout<<a<<endl;

    ChangeA(&a);
    cout<<a<<endl;
    
    ChangeA2(a);

    cout<<a<<endl;
}