#include<iostream>
using namespace std;

int main(){
    //* normal arr 

    // int arr[100]={1,2,3,4,5};

    int size;
    cin>>size;

    int * arr=new int [size];

    cout<<*(arr +0)<<" ";
    cout<<*(arr +1)<<" ";
    cout<<*(arr +2)<<" ";

    int x=1;
    for(int i=0; i<size;i++){
        arr[i]=x;
        cout<<arr[i]<<" ";
        x++;
    }
    
    int * ptr =new int;

    delete []arr;
    delete ptr;
    cout<<"ji";
    return 0;
}