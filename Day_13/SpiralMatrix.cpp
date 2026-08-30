#include<iostream>
using namespace std;

void spiralMatrix(int mat [][4],int n , int m){

    int srow = 0,erow=n-1,scol=0, ecol=m-1;


    while (srow <= erow && scol<=ecol)
    {
        //top
    for(int  j=scol;j<=ecol;j++){
        cout<<mat[srow][j]<<" ";
    }

    //right
    for(int  i=srow+1;i<=erow;i++){
        cout<<mat[i][ecol]<<" ";
    }

   // bottom
    for(int  j=ecol-1;j>=scol;j--){
        if(scol == ecol){
            break;
        }
        cout<<mat[erow][j]<<" ";
    }

    //left
    for(int  i=erow-1;i>=srow+1;i--){
        if(srow == erow){
            break;
        }
        cout<<mat[i][scol]<<" ";
    }

    srow++,scol++,ecol--,erow--;
}
    
}

void printMatrix(int mat[][4],int n , int m){
    for(int i=0 ; i<n; i++){
        for(int j =0; j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){

    int mat[2][4] ={
        {1,2,3,4},
        {5,6,7,8}
    };

    int n=2,m=4;
    printMatrix(mat,n,m);
    spiralMatrix(mat,n,m);

}