#include <iostream>
using namespace std;

int *funInt()
{
    int *ptr = new int;
    *ptr = 10;
    delete ptr;

    return ptr;
}

int *funArray()
{

    int n;
    cout << "enter the size of the arr : ";
    cin >> n;

    int *arr = new int[n];

    int x = 1;

    for (int i = 0; i < n; i++)
    {
        arr[i] = x;
        cout << arr[i] << " ";
        x++;
    }

    delete[] arr;

    return arr;
}

int main()
{
    int *intPtr = funInt();

    int *ptr = funArray();
    return 0;
}