#include <iostream>
using namespace std;

int main()
{

    //*  How create DYnamic 2D Array

    int rows = 0, column = 0;
    cout << "Enter Number of rows : " << endl;
    cin >> rows;

    cout << "Enter Number of  Column : " << endl;
    cin >> column;

    int **matrix = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[column];
    }
    cout << "Enter the element of 2D Dynamic Array : " << endl;
    // * take input DYnamic 2D Array

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Output of 2D Dynamic Array : " << endl;

    //* Output DYnamic 2D Array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}