#include<iostream>
using namespace std;

int sum(int a , int b){
    cout<<"first 1  \n";
    return a+b;
}

int sum(int a , int b ,int c){
    cout<<"second 2 \n";
    return a+b+c;
}

double sum(double a , double b){
    cout<<"third 3\n";
    return a+b;
}

double sum(int a , double b){
    cout<<"fourth 4 \n";
    return a+b;
}

int main(){

    cout<<sum(1,3)<<endl;//first sum call. ans :4
    cout<<sum(1,3,5)<<endl;//second sum call. ans :9
    cout<<sum(1.5,3.5)<<endl;//third  sum call. ans :5
    cout<<sum(1,3.5)<<endl;//fourth sum call. ans :4.5

}