#include <iostream>
using namespace std;

bool stairecaesSearchMatrix1(int mat[][4], int n, int m, int key){
    int i=0,j=m-1;

    while(i<=n-1 && j >=0){

        if(mat[i][j] == key){
            cout << "key Founded at index : " << "[" << i << "]" << " [" << j << "]" << " : " << key<<endl;
            return true;
        }else if(mat[i][j] < key){
            i++;
        }else{
            j--;
        }
    }
    return false;
}


bool stairecaesSearchMatrix2(int mat[][4], int n, int m, int key){
    int j=0,i=n-1;

    while(i>=0 && j <=m-1){

        if(mat[i][j] == key){
            cout << "key Founded at index : " << "[" << i << "]" << " [" << j << "]" << " : " << key<<endl;
            return true;
        }else if(mat[i][j] < key){
            j++;
        }else{
            i--;
        }
    }
    return false;
}

void printMatrix(int mat[][4], int n, int m)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int mat[4][4]{
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    int n = 4, m = 4, key = 50;
    cout<<stairecaesSearchMatrix1(mat, n, m, key)<<endl;
    cout<<stairecaesSearchMatrix2(mat, n, m, key)<<endl;
}