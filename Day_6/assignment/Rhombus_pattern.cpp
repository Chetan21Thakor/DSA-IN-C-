#include<iostream>
using namespace std;


// it's my code for 0-1 triangle pattern
void  Rhombus(int n){

    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
} 



int main(){
Rhombus(5);
}