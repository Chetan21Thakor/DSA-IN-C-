#include <iostream>
using namespace std;

bool question1(int arr[], int n)
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

    for (int i = minVal;i <= maxVal; i++)
    {
        if(freq[i] > 1){
            return true;
        }
    }
    return false;
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
    int arr[] = {5,5,1,8,2};
    int n = sizeof(arr) / sizeof(int);

    cout<<question1(arr, n)<<endl;
    // printArray(arr, n);
}