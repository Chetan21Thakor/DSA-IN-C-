#include<iostream>
using namespace std;

void Pattern_1_Number_square(int n){

    for(int i = 1; i<=n; i++){

        for(int j=1; j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void Pattern_2_Star(int n){

    for(int i = 1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void Pattern_4_1_Star(int n){

    for(int i = n; i>=1; i--){
        for(int j=1; j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void Pattern_4_Star(int n){

    for(int i = 1; i<=n; i++){
        for(int j=1; j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void Pattern_5_half_pyramid_num(int n){

    for(int i = 1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void Pattern_6_half_pyramid_alpha(int n){

    char ch='A';

    for(int i = 1; i<=n; i++){
        
        for(int j=1; j<=i;j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
}

void Pattern_7_hollow_rectangle(int n){
    
    for(int i = 1; i<=n; i++){
        
        for(int j=1; j<=n+1;j++){
            if( i == 1 || i==n || j==1 || j==n+1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void Pattern_8_Inverted_rotated_half_pyramid(int n){
    
    for(int i = 1; i<=n; i++){
        
        for(int j=1; j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1; k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void Pattern_9_floyd_Triangle(int n){

    int count=1;

    for(int i = 1; i<=n; i++){
        
        for(int j=1; j<=i;j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}

void Pattern_10_Diamond(int n){
    
    for(int i = 1; i<=n; i++){
        
        for(int j=1; j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1; k<=(2*i)-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = n; i>=1; i--){
        
        for(int j=1; j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1; k<=(2*i)-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void Pattern_11_Butterfly(int n){
    
    for(int i = 1; i<=n; i++){
        
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        for(int k=1; k<=(n-i)*2;k++){
            cout<<" ";
        }
        for(int l=1; l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = n; i>=1; i--){
        
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        for(int k=1; k<=(n-i)*2;k++){
            cout<<" ";
        }
        for(int l=1; l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
   
}
}

int main(){
    Pattern_11_Butterfly(99);
}