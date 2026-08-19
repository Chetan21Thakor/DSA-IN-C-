#include<iostream>
using namespace std;

void multiplyBy2(int &a,int &b,int &c){
    a=a*2;
    b=b*2;
    c=c*2;
}

int main(){
    
    int x=2,y=3,z=4;
    multiplyBy2(x,y,z);
    cout<<x<<" "<<y<<" "<<z<<endl;
}