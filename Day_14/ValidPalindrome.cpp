#include<iostream>
#include <cstring>
using namespace std;


bool ValidPalindrome(char arr[],int n){

    int st=0,end=n-1; bool isValidPalindrome=true;

    while (st < end)
    {
        if(arr[st] != arr[end] ){
           isValidPalindrome=false;
           return isValidPalindrome;
        }
        st++,end--;
    }
    return isValidPalindrome;
}

int main(){

    char word[]="1991";
    cout<<ValidPalindrome(word,strlen(word));
}