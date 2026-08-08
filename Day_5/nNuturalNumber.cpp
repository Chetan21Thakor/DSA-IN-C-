#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter n:"<<endl;
    cin>>n;

    for(int i=1; i<=n;i++){
        cout<< i <<endl;
    }
    cout<<"Reverse Order"<<endl;
    
    for(int i=n; i>=1;i--){
        cout<< i <<endl;
    }
}