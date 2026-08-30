#include <iostream>
#include <iomanip>
using namespace std;

float SimpleInterest(int p, int r, int t)
{

    float simpleInterest = (p * r * t) / 100;

    return simpleInterest;
}

int main()
{

    int p;
    int r;
    int t;

    cout << "Enter P in Rupee: " << endl;
    cin >> p;

    cout << "Enter R in Percentage: " << endl;
    cin >> r;

    cout << "Enter T in Month: " << endl;
    cin >> t;

    cout<<"Simple Interest is : "<<SimpleInterest(p,r,t)<<endl <<"Total Rupee you have to Pay with Principal is : " << p + SimpleInterest(p,r,t);
}