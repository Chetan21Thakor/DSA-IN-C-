#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector<int> vec;
    // cout<<vec.size()<<endl;//0
    // cout<<vec.capacity()<<endl;//0

    vector<int>vec1={1,2,3,4};
    cout<<vec1.size()<<endl;//1
    cout<<vec1.capacity()<<endl;//1

    vector<int>vec2(5,0);
    cout<<vec2.size()<<endl;//5
    cout<<vec2.capacity()<<endl;//5

    int size;
    cout<<"enter Size of the Vector : "<<endl;
    cin>>size;

    vector<int>vec(size);

    cout<<"Enter the element of the vector : "<<endl;

    for(int i =0; i<vec.size();i++){
        cin>>vec[i];
    }

    cout<<"\nelement of the vector : "<<endl;

    for(int i =0; i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}