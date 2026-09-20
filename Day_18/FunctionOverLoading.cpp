#include <iostream>
using namespace std;

class Addition {

public:
    //Function OverLoading
    int add(int a,int b){
        return a+b;
    }

    int add(int a,int b,int c){
        return a+b+c;
    }

    int add(int a,int b,int c,int d){
        return a+b+c+d;
    }

    int add(int a,int b,int c , int d , int e){
        return a+b+c+d+e;
    }

    double add(int a,double b){
        return a+b;
    }

    float add(float a,double b,int c){
        return a+b+c;
    }

    
};

int main()
{
    Addition a;

    cout << "Sum is : " << a.add(1,2)<< endl;
    cout << "Sum is : " << a.add(1,2,3)<< endl;
    cout << "Sum is : " << a.add(1,2,3,4)<< endl;
    cout << "Sum is : " << a.add(1,2,3,4,5)<< endl;
    cout << "Sum is : " << a.add(1,2.9)<< endl;
    cout << "Sum is : " << a.add(1.5,2.9,10)<< endl;
    return 0;
}
