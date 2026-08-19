#include<iostream>
using namespace std;

int main(){
    int x=5,y=10;

    int *ptr1=&x, *ptr2=&y;
    ptr2=ptr1; // Now ptr1 is pointing to y
    cout<<*ptr1<<endl; // Output: 5
    cout<<*ptr2<<endl; // Output: 5
    cout<<&x<<" = "<<ptr1<<" = "<<ptr2<<endl; // Output: Address of x
}