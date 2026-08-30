#include <iostream>
using namespace std;

int KedensAlgo(int arr[], int n)
{

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    cout << "Maximum subarray sum : " << maxSum << endl;

    return maxSum;
}

void printArr(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {-11, -22, -3, -4, -5};
    int n = sizeof(arr) / sizeof(int);

    KedensAlgo(arr,n);
    // printArr(arr,n);
}