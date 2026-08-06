#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;

    cout<<"Enter number 1:"<<endl;
    cin>>num1;

    cout<<"Enter number 2:"<<endl;
    cin>>num2;

    cout<<"Enter number 3:"<<endl;
    cin>>num3;

    if(num1 > num2 && num1 > num3){
        cout<<"Num1 is Largest.";
    }else if (num2 > num3){
        cout<<"Num2 is Largest.";
    }else{
        cout<<"Num3 is Largest.";
    }
}