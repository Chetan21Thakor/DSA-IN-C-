#include<iostream>
using namespace std;


// it's my code for 0-1 triangle pattern
void  _0_1_Triangle(int n){

    for(int i=1;i<=n;i++){

        int val = (i % 2 != 0) ? 1 : 0;

        for(int j=1;j<=i;j++){

            cout<<val;
            val = 1 - val; 
        }
        cout<<endl;
    }
} 



int main(){
_0_1_Triangle(5);
}