#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{

    for (int i = 0; i < n-1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] > arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}


void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);

    printArray(arr,n);
    bubbleSort(arr,n);
    printArray(arr,n);
}
