#include<iostream>
using namespace std;

//* Without using extra space we can reverse the array by swapping the first and last element and then second and second last element and so on until we reach the middle of the array.
void reverseArray(int arr[], int n){
    int start = 0;
    int end = n - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

//* with extra space we can reverse the array by creating a new array and copying the elements of the original array in reverse order.
void reverseArrayWithExtraSpace(int arr[], int n){
    int *temp = new int[n];

    for(int i=0;i<n;i++){
        temp[i] = arr[n-i-1];
    }

    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }

    delete[] temp;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, n);

    cout << "Reversed Array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}