#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    bool isPrime=true;
    cout<<"Enter n:"<<endl;
    cin>>n;

    for(int i=2; i<sqrt(n) ;i++){
        
        if(n % i==0){

            isPrime=false;
        }
    }

    if(isPrime){
        cout<<"Number is Prime";
    }else{
        cout<<"Number is not  Prime";
    }
    
}