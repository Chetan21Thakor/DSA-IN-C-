#include <iostream>
#include <vector>
using namespace std;

// void hello(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }

//     cout << "Hello world" << n << endl;
//     n--;
//     hello(n);
// }

void printVec(vector<int> arr, int i)
{
    if (i == arr.size())
    {
        return;
    }

    cout << arr[i] << endl;

    printVec(arr, i + 1);
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}

int main()
{
    // hello(15);
    // vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    // printVec(arr,0);

    cout <<sum(5);

    return 0;
}