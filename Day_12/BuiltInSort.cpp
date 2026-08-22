#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr) / sizeof(int);

    sort(arr,arr+n,greater<int>());
    printArray(arr,n);
}