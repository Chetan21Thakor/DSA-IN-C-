#include <iostream>
using namespace std;

int maxSubArraySum1(int arr[], int n)
{

    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {

            int currSum = 0;

            for (int k = i; k <= j; k++)
            {

                currSum += arr[k];
            }
            maxSum = max(maxSum, currSum);
        }
    }

    cout << "Maximum subarray sum : " << maxSum << endl;

    return maxSum;
}

int maxSubArraySum2(int arr[], int n)
{

    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        int currSum = 0;

        for (int j = i; j < n; j++)
        {

            currSum += arr[j];
            maxSum = max(maxSum, currSum);
        }
    }

    cout << "Maximum subarray sum : " << maxSum << endl;

    return maxSum;
}

int maxSubArraySum3(int arr[], int n)
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

int main()
{

    int arr[] = {-11, -22, -3, -4, -5};
    int n = sizeof(arr) / sizeof(int);

    maxSubArraySum1(arr, n);
    maxSubArraySum2(arr, n);
    maxSubArraySum3(arr, n);
}