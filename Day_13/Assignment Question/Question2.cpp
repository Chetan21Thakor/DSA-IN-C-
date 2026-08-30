// TODO Assignment  all question remain to complete

#include <iostream>
using namespace std;

int second_row_sum_in_Matrix(int mat[][3], int n, int m)
{
    int sum = 0;

    for (int j = 0; j < m; j++)
    {
        sum += mat[1][j];
    }

    return sum;
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
                        {7, 7, 9}
                    };

    int n = 3, m = 3;
    cout << second_row_sum_in_Matrix(mat, n, m);
    // printMatrix(mat, n, m);
}