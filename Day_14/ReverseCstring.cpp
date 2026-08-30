#include<iostream>
#include<cstring>
using namespace std;

void reverseCstring(char str[], int n){

    int st=0,end=n-2;

    while (st < end)
    {
        swap(str[st],str[end]);
        st++,end--;
    }
}

void printCstring(char str[], int n){

    for(int i=0;i<n;i++){
        cout<<str[i]<<" ";
    }
}

int main(){

    char str[]="hi how are you";
    int n =sizeof(str)/sizeof(char);

    reverseCstring(str,n);
    printCstring(str,n);

}