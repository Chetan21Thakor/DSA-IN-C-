#include<iostream>
using namespace std;

int main(){
     int num1;

    cout<<"Enter number 1:"<<endl;
    cin>>num1;

    if (num1 % 2 == 0){
        cout<<"Number is Even.";
    }else{
        cout<<"Number is Odd.";
    }
}