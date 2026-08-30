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
    //which type of character value character data type can store.
    char ch='a';
    char ch1='!';
    char ch2='5';
    char ch3='A';
    char ch4='\n';

    //position of any small letter in lowercase alphabet.
    int pos =ch-'a';
    cout << pos<<endl;

    //position of any uppercase letter in uppercase alphabet.
    int pos =ch-'A';
    cout << pos<<endl;

    //Asci code of a = 65 and A =97 

    int ascii_code_a=int('a'); 
    int ascii_code_A=int('A'); 


   
}