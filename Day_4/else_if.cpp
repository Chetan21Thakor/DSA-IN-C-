#include<iostream>
using namespace std;


int main(){
    int marks;

    cout<<"Enter a Marks:"<<endl;
    cin>>marks;

    if(marks>=91){
        cout<<"Your grade is A+"<<endl;
    }else if(marks>=81){
        cout<<"Your grade is A"<<endl;
    }else if(marks>=71){
        cout<<"Your grade is B+"<<endl;
    }else if(marks>=61){
        cout<<"Your grade is B"<<endl;
    }else if(marks>=51){
        cout<<"Your grade is C+"<<endl;
    }else if(marks>=41){
        cout<<"Your grade is D"<<endl;
    }else if(marks<=33){
        cout<<"You are Fail."<<endl;
    }

}