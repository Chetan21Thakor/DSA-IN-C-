#include<iostream>
using namespace std;

int main(){
    int n,sum=0;

    cout<<"Enter n:"<<endl;
    cin>>n;

    while (n > 0){
        
        int lastdigit;

        lastdigit=n%10;

        sum+=lastdigit;
        
        n=n/10;
    }
    cout<<"sum of digit :"<<sum<<endl;
}