// TODO Assignment  all question remain to complete

#include <iostream>
using namespace std;

int num_7_count_in_Matrix(int mat[][3], int n, int m)
{
    int count_of_num_7 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 7)
            {
                count_of_num_7++;
            }
        }
    }

    return count_of_num_7;
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
                        {7, 7, 7},
                        {7, 7, 9}
                    };

    int n = 3, m = 3;
    cout<<num_7_count_in_Matrix(mat,n,m);
    // printMatrix(mat, n, m);
}