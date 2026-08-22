#include <iostream>
using namespace std;

void countSort(int arr[], int n)
{
    int freq[10000] = {0};
    int minVal = INT_MAX, maxVal = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    // cout<<minVal<<" "<<maxVal;

    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr) / sizeof(int);

    countSort(arr, n);
    printArray(arr, n);
}