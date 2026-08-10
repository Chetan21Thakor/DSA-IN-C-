#include <iostream>
using namespace std;

int factorial(int a)
{
    int fact=1;

    for(int i=1;i<=a;i++){
         fact*=i;
    }
    return fact;
}

int binomial_coefficient(int n,int r){
    int fact_n=factorial(n);
    int fact_r=factorial(r);

    int binomial_coeff=(fact_n)/(fact_r*factorial(n-r));
    return binomial_coeff;
}

int main()
{
    cout<<binomial_coefficient(4,2) << endl; // ans :Even
    return 0;
}