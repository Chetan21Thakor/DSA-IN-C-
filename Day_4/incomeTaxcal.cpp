#include<iostream>
using namespace std;

int main(){

    double income,tax;

    cout<<"Enter your Income:"<<endl;
    cin>>income;

    if( income <= 500000){
        tax=0;
    }else if( income > 500000 && income<=1000000 ){
        tax=0.2 * income;
        cout<<"your Payable TAX is:"<<tax<<endl;
    }else{
        tax=0.3 * income;
        cout<<"your Payable TAX is:"<<tax<<endl;
    }

}