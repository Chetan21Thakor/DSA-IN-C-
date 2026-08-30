#include<iostream>
#include <cstring>
using namespace std; 

void chararr(char ch[],int n){
    //character array  name is pointer.
    cout<<*(ch + 0)<<endl;
    cout<<*(ch + 1)<<endl;
    cout<<*(ch + 2)<<endl;
    cout<<*(ch + 3)<<endl;
    cout<<*(ch + 4)<<endl;

    cout<<*(ch)<< " = "<<&ch<<endl;
    // cout<<*(ch +1)<< " = "<<&(ch)<<endl;
    // cout<<&ch[1]<< " = "<<&ch<<endl;
}

int main(){
//character array  is just like normal array
    // char ch5[]="chetan";
    // int n=sizeof(ch5)/sizeof(char);

    // // different-different way of creating character array.

    //  char ch10[]="chetan";
    //  char ch7[7]="chetan";
    //  char ch8[]={'c','h','e','t','a','n','\0'};
    //  char ch9[7]={'c','h','e','t','a','n','\0'};
     

    // int n=sizeof(ch5)/sizeof(char);

    // cout<<ch5<<endl;
    // cout<<ch5[n-2]<<endl;

    char str[]="hello";
    char str1[]=" world";
    char str2[10];

    cout<<"length of string is : "<<strlen(str)<<endl;
    cout<<"Copy src string  into dest string : "<<strcpy(str2,str)<<endl;
    cout<<"Concatenate src string  into dest string : "<<strcat(str,str1)<<endl;
    cout<<"Compare two string : "<<strcmp(str2,str)<<endl;


    // chararr(ch6,strlen(ch6));

    //* Accessing each element of the character array using index 

    // for( int i=0;i<strlen(ch6);i++){
    //     cout<<ch6[i]<<" ";
    // }

    // char ch11[20];

    // cout<<ch11<<endl;
    // cin>>ch11;
    // cout<<ch11<<endl;

    // cin.getline(ch11,20);
    
    // cout<<strlen(ch6)<<endl;


}