#include<iostream>
using namespace std;

// Linear Search Time Complexcity O(n * m);
void linearSearchMatrix(int mat[][3], int n, int m, int key)
{
    bool found = false;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (key == mat[i][j])
            {
                cout << "key Founded at index : " << "[" << i << "]" << " [" << j << "]" << " : " << key<<endl;
                found = true;
            }
        }
    }

    if (!found)
    
    {
        cout << "key is Not Founded " << endl;
    }
}

void printMatrix(int mat[][3], int n, int m)
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


int main(){

   
    int matrix[3][3]={
        {11,54,99},
        {99,34,76},
        {22,43,98}
    };

     int n = 3, m = 3, key = 93;

    linearSearchMatrix(matrix, n, m, key);

}