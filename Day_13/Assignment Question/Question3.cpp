// TODO Assignment  all question remain to complete

#include <iostream>
using namespace std;

void printMatrix(int mat[][3], int n, int m);

void transposed_Matrix(int mat[][3], int n, int m)
{
    int transposed_Matrix[m][3] = {{0}};

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            transposed_Matrix[i][j]=mat[j][i];
        }
    }

    printMatrix(transposed_Matrix,3,3);
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
        {7, 1, 2},
        {7, 7, 9}};

    int n = 3, m = 3;
    transposed_Matrix(mat, n, m);
    printMatrix(mat, n, m);
}