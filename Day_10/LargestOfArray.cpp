#include <iostream>
#include<math.h>
using namespace std;


int main()
{

    int arr[10]={-1,-4,-8,-1,0,-7,-9,-10,-8,-11011};

    int n=sizeof(arr)/sizeof(int);

    int largest=arr[0];

    int minium=arr[0];

    for (int i = 0; i < n; i++)
    {
        largest=max(arr[i],largest);
        minium=min(arr[i],minium);
    }
    
    cout<<largest<<endl;

    cout<<minium<<endl;
}