#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    int n=sizeof(arr)/sizeof(int);

    //* Input of the array. 
    //* we can use a for loop to take input and so output in array. three thing we need to do that 
    /*
        1.initialization 
            for that we very well know that array index always start from a 0.

        2.Updation
            for that we very well know that array index always start from a 0 and increase by one upto last index of the array.

        3.Condition where to stop loop
            for that we need array length 
            sizeof(arr) this function give us a entire size of the array based on it's data type
            for find out the length   array  we just have to divide a  entire size of array by it's data type size.
            formula :
            length= sizeof(arr) /  sizeof(int) 
    */

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //* output of the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }

    //* Length of the array
    cout << "Length of the array : " << sizeof(arr) / sizeof(int) << endl;
}