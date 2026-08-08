#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n=10;

    bool isPrime;

    // cout<<"Enter n:"<<endl;
    // cin>>n;

    for(int i=3;i<n;i++){
            isPrime=true;
        for(int j=2; j*j<=i ;j++){
            
            if(i % j == 0){
                isPrime=false;
            }
        }
         if(isPrime){
            cout<<i<<" ";
        }
        
    }
       
}