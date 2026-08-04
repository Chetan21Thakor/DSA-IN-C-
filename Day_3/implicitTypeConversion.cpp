#include<iostream>
using namespace std;

int main(){
    cout<<(10/3)<<endl;
    cout<<(10/3.0)<<endl;
    cout<<('a' + 1)<<endl;
    cout<<int(',');

    //*A conversion of data from one type to another type automatically by the compiler to avoid data lose it's called "Implicit Type conversion".
                //* 1.it's done by compiler.
                //* 2.no data lose. 
                //* 3.it's also called a "Type Promotion".
                //* 4.bool->char->int->float->double.

            //*     This Last Line Meaning is when we are doing any operation between to different data type then it's always converted into bigger size data type.

            //* for Example 

            //* if we do operation between  
            //* "character data type with a integer  then final result store into integer data type". "integer data type with a float  then final result store into float data type". 
            //* "float data type with a Double  then final result store into double data type".
}