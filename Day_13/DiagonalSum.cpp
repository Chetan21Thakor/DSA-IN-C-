#include <iostream>
using namespace std;

int diagonalSum(int mat[][3], int n)
{

    int diagonalSum = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                diagonalSum += mat[i][j];
                // cout<<diagonalSum ;
            }
            else if (j == n - i - 1)
            {
                diagonalSum += mat[i][j];
                // cout<<diagonalSum ; 
            }
        }
    }
    return diagonalSum;
}

int diagonalSum1(int mat[][3], int n)
{

    int diagonalSum = 0;

    for (int i = 0; i < n;i++)
    {

        diagonalSum+=mat[i][i];

         if(!(i == n-i-1) ){
            diagonalSum+=mat[i][n-i-1];
        }

    }

    return diagonalSum;
}

void printMatrix(int mat[][3], int n, int m)
{
    cout << endl;
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
    int mat[3][3] = {
        {1, 2, 3},
        {4,5, 6,},
        {7, 8,9}
    };

    int n = 3, m = 3;
    // cout<<diagonalSum(mat,n);
    
    cout<<diagonalSum1(mat,n);
    printMatrix(mat, n, m);
    
}