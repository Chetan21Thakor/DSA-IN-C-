#include<iostream>
using namespace std;

int* fun1(){
    int *ptr=new int;
    *ptr=10;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    delete ptr;

    return ptr;
}

int* fun(int n){

    int *arr=new int[n];
    

    int x=1;
    for(int i=0; i<n;i++){
        arr[i]=x;
        cout<<arr[i]<<" ";
        x++;
    }

    delete []arr;

    return arr;
}

int main(){
    // int * x=fun1();
    // cout<<*x<<endl;
    // cout<<x<<endl;

    int size;
    cout<<"enter the size of the arr : ";
    cin>>size;

    int * arr=fun(size); 

    cout<<endl;
    
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}