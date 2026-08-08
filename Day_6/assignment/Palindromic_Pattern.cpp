#include<iostream>
using namespace std;


// it's my code for 0-1 triangle pattern
void  Palindromic_Pattern(int n){

    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        } 
        for(int l=i;l>=1;l--){
                cout<<l;
        }
        for(int m=1;m<=i-1;m++){
                cout<<m+1;
        }
        cout<<endl;
    }
} 



int main(){
    Palindromic_Pattern(5);
}