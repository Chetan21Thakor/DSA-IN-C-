
#include <iostream>
using namespace std;

int digitSum(int n)
{
    int num = n;
    int sum = 0;
    int pow = 1;

    while (num > 0)
    {
        int lastDigit = num % 10;
       sum +=lastDigit;
        num /= 10;
    }
    return sum;
}

int main()
{

    int n;

    cout << "Enter a  Number : " << endl;
    cin >> n;

    cout<<"Digit sum of : "<< n <<" is : "<<digitSum( n);

}