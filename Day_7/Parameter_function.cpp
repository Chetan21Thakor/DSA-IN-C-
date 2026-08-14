#include<iostream>
using namespace std;

//forward Declaration
int sum(int a,int b);

int main () {
    cout<<sum(4,5);
    return 0;
}

int sum(int a ,int b) {
    int sum=a+b;
    return sum;
}