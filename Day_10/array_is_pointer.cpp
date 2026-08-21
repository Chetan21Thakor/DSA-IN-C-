#include <iostream>
using namespace std;

void printArray(int arr[] ,int n)
{

    // ! int n = sizeof(arr) / sizeof(int); it's not give length of the Array . 

    //*  When are passing array to function  it's only pass the array pointer not entire array to function just because of that we can't can calculate array length in function so always when we are passing array to function we always pass with it's size or length. 

    for (int i = 0; i < n; i++)
    {
        cout << "*(arr + "<<i<<") doing this : "<<*(arr + i) << " || is exact equal to doing this arr["<<i<<"]: "<< arr[i]<<endl;
    }
}

int main()
{
    int a = 10;
    int *ptr = &a;

    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(int);

    cout << ptr << endl;

    cout << "Array name is Pointer it's Pointe to first element of the " << arr << endl; //* This line Prove that Array name is Pointer in c++;

    cout << "memory address &arr[0] is " << &arr[0] <<" =  Memory address of the arr  = "<<arr<< endl;

    //* in C++ Array is Pointer or Array name is Pointer which Always Pointing to the first Element of the Array.

    //* using this Array Pointer you can access and modify  the Array Element.

    printArray(arr,n); //* When are passing array to function it's always passed by reference . it's mean all the changes which we made in function in Array it's all are reflect in original array.

    //*  When are passing array to function  it's only pass the array pointer not entire array to function just because of that we can't can calculate array length in function so always when we are passing array to function we always pass with it's size or length. 

}
