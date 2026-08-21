#include<iostream>
using namespace std;

int main(){

    int arr[10];//* This line tell to compiler that "take continuous memory location in memory to store a 10 integers value in one single variable which name is arr."
    //* if you are not initialize array with valid value then it's store a garbage value inside it.


    int arr1[10]={1,2,3};//*This line tell to compiler that "take continuous memory location in memory to store a 10 integers value in one single variable which name is arr.initialize array with {1,2,3}."

    int arr3[]={1,2,3}; //*This line tell to compiler that "take continuous 3 memory location in memory to store a 3  integers value which is already define right hand side in one single variable which name is arr  .initialize array with {1,2,3}."

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[49]<<endl;
    cout<<endl;

    cout<<arr1[0]<<endl;
    cout<<arr1[1]<<endl;
    cout<<arr1[2]<<endl;
    cout<<arr1[3]<<endl;
    cout<<arr1[49]<<endl;
    cout<<endl;

    cout<<arr3[0]<<endl;
    cout<<arr3[1]<<endl;
    cout<<arr3[2]<<endl;
    cout<<arr3[3]<<endl;
    cout<<arr3[45]<<endl;
}