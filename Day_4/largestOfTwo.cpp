#include<iostream>
using namespace std;

int main(){
    int num1,num2;

    cout<<"Enter number 1:"<<endl;
    cin>>num1;

    cout<<"Enter number 2:"<<endl;
    cin>>num2;

    if(num1 > num2){
        cout<<"Num1 is Largest.";
    }else{
        cout<<"Num2 is Largest.";
    }
}