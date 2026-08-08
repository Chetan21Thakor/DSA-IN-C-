#include<iostream>
using namespace std;

int main(){
    int n,n2;

    cout<<"Enter n:"<<endl;
    cin>>n;
    n2=n;
    int sum=0;

    while(n>0){
        int lastDigit=n%10;
        sum+=lastDigit*lastDigit*lastDigit;
        n=n/10;
    }

    if(n2==sum){
        cout<<"Number is Armstrong Number.";
    }else{
         cout<<"Number is  not Armstrong Number.";
    }
}