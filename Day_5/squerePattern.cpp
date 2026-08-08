// #include<iostream>
// using namespace std;

// int main(){
//     int n=4;
    
//     for(int i=1; i<=n;i++){
//        for(int i=1;i<=n;i++){
//         cout<<"*"<<" ";
//        }
//        cout<<endl;
//     }
// }

#include<iostream>
using namespace std;

int main(){
    int n,sum=0;

    cout<<"Enter n:"<<endl;
    cin>>n;

    while (n > 0){
        
        int lastdigit=n%10;
        sum+=lastdigit;
        n/10;
    }
    cout<<"sum of digit :"<<sum<<endl;
}