// TODO all the assignment Question  complete

#include <iostream>
using namespace std;

int maxProduct(int arr[], int n)
{

    int currProduct = 1;
    int maxProduct = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        currProduct *= arr[i];
        maxProduct = max(maxProduct, currProduct);

        if (currProduct < 0)
        {
            currProduct = 1;
        }
    }

    cout << "Maximum subarray sum : " << maxProduct << endl;

    return maxProduct;
}

void printArr(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {-2,0,-1};
    int n = sizeof(arr) / sizeof(int);

    maxProduct(arr,n);
    // printArr(arr,n);
}