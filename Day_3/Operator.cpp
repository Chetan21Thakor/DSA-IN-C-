#include<iostream>
using namespace std;

int main(){
    //! Operators

    //Arithmetic Operator

    int a =9;
    int b=4;

    cout<<"a + b = "<<a+b<<endl;//* ans:13
    cout<<"a - b = "<<a-b<<endl;//* ans:5
    cout<<"a * b = "<<a*b<<endl;//* ans:36
    cout<<"a / b = "<<a/b<<endl;//* ans:2
    cout<<"a % b = "<<a%b<<endl;//* ans:1

    cout<<"a++ = "<<a++<<endl;//* ans:9
    cout<<"++a = "<<++a<<endl;//* ans:11
    cout<<"a-- = "<<a--<<endl;//* ans:11
    cout<<"--a = "<<--a<<endl;//* ans:9

    //* Assignment Operator

    // a=a+5;//*ans:14 
    a+=5;//* ans:14
    a-=5;//* ans:9
    a*=5;//* ans:45
    a/=5;//* ans:9
    a%=5;//* ans:4

    //* Relational Operator
    cout<<"a == b: "<<(a==b)<<endl;//* ans:0
    cout<<"a != b: "<<(a!=b)<<endl;//* ans:1
    cout<<"a > b: "<<(a>b)<<endl;//* ans:1
    cout<<"a < b: "<<(a<b)<<endl;//* ans:0
    cout<<"a >= b: "<<(a>=b)<<endl;//* ans:1
    cout<<"a <= b: "<<(a<=b)<<endl;//* ans:0
    //* Logical Operator
    cout<<"(a==b) && (a<b): "<<((a==b) && (a<b))<<endl;//* ans:0
    cout<<"(a==b) || (a<b): "<<((a==b) || (a<b))<<endl;//* ans:0
    cout<<"!(a==b): "<<(!(a==b))<<endl;//* ans:1

    return 0;
}