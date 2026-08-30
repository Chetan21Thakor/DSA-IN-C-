#include <iostream>
using namespace std;

// Binary Search Row Wise
void BinarySearchRowWiseMatrix(int mat[][4], int n, int m, int key)
{

   int srow = 0, erow = n - 1;
    bool found=0;

    while (srow <= erow)
    {
        int scol = 0, ecol = m - 1;

        while (scol <= ecol)
        {
            int midIdx = (scol + ecol) / 2;

            if (key == mat[srow][midIdx])
            {
                cout << "key Founded at index : " << "[" << srow << "]" << " [" << midIdx << "]" << " : " << key<<endl;;
                found=1;
                return;
            }
            else if (key < mat[srow][midIdx])
            {
                ecol = midIdx - 1;
            }
            else
            {
                scol = midIdx + 1;
            }
        }
        srow++;
    }
    if(!found){
        cout<<"Key is Not Found"<<endl;
    }
}

// Binary Search Row Wise
void BinarySearchColumnWiseMatrix(int mat[][4], int n, int m, int key)
{
    bool found=0;
    int scol = 0, ecol = m - 1;
    
    while (scol <= ecol)
    {
        int srow = 0, erow = n - 1;

        while (srow <= erow)
        {
            int midIdx = (srow + erow) / 2;

            if (key == mat[midIdx][scol])
            {
                cout << "key Founded at index : " << "[" << midIdx << "]" << " [" << scol << "]" << " : " << key<<endl;
                found=1;
                return;
            }
            else if (key < mat[midIdx][scol])
            {
                erow = midIdx - 1;
            }
            else
            {
                srow = midIdx + 1;
            }
        }
        scol++;
    }
    if(!found){
        cout<<"Key is Not Found"<<endl;
    }
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
        {32, 33, 39, 50}
    };

    int n = 4, m = 4, key = 32;
    BinarySearchRowWiseMatrix(mat, n, m, key);
    BinarySearchColumnWiseMatrix(mat, n, m, key);
}