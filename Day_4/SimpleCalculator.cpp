#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    double result;

    char op;

    cout<<"Enter number 1:"<<endl;
    cin>>num1;

    cout<<"Enter number 2:"<<endl;
    cin>>num2;

    cout<<"Enter Operator:"<<endl;
    cin>>op;

    // if( op == '+'){
    //     result=num1+num2;
    //     cout<<"a + b = "<<result<<endl;
    // }else if( op == '-'){
    //     result=num1-num2;
    //     cout<<"a - b = "<<result<<endl;
    // }else if( op == '*'){
    //     result=num1*num2;
    //     cout<<"a * b = "<<result<<endl;
    // }else if( op == '/'){
    //     result=num1/num2;
    //     cout<<"a / b = "<<result<<endl;
    // }

    switch (op){
        case '+':result=num1+num2;
                cout<<"a + b = "<<result<<endl;
                break;
        case '-':result=num1-num2;
                cout<<"a - b = "<<result<<endl;
                break;
        case '*':result=num1*num2;
                cout<<"a * b = "<<result<<endl;
                break;
        case '/':result=num1/num2;
                cout<<"a / b = "<<result<<endl;
                break;
    
        default:cout<<"invalid Operation"<<endl;
    }
}