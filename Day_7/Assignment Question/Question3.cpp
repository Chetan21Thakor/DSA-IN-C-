
#include <iostream>
using namespace std;

int aPlusbHoleSquare(int a,int b){

    int holeSquare= (a * a) + (b*b)+(2*a*b);
    return holeSquare;
}

int main()
{

    int a,b;

    cout << "Enter a : " << endl;
    cin >> a;

    cout << "Enter b : " << endl;
    cin >> b;

    cout<<"(a + b) ^ 2 is : "<<aPlusbHoleSquare(a,b);

}