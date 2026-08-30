#include <iostream>
using namespace std;

int main()
{
    int twoDimensionalArr[3][3]={
                                {1,2,3}, 
                                {4,5,6}, 
                                {7,8,9}
    };

     cout<<(&twoDimensionalArr[0][0])<<" = "<<(*(twoDimensionalArr+ 0))<<endl;
    cout<<(&twoDimensionalArr[1][0])<<" = "<<(*(twoDimensionalArr + 1))<<endl;
    cout<<(&twoDimensionalArr[2][0])<<" = "<<(*(twoDimensionalArr + 2))<<endl;

    cout<<*(&twoDimensionalArr[0][0])<<" = "<<*(*(twoDimensionalArr+ 0))<<endl;
    cout<<*(&twoDimensionalArr[1][0])<<" = "<<*(*(twoDimensionalArr + 1))<<endl;
    cout<<*(&twoDimensionalArr[2][0])<<" = "<<*(*(twoDimensionalArr + 2))<<endl;

    // cout<<twoDimensionalArr[0][0]<<endl;
    // cout<<twoDimensionalArr[0][1]<<endl;
    // cout<<twoDimensionalArr[0][2]<<endl;

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<twoDimensionalArr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>twoDimensionalArr[i][j];
    //     }
    // }

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<twoDimensionalArr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}