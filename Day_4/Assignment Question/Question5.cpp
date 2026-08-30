#include <iostream>
using namespace std;

bool isArmstrong(int n)
{

    int num = n;
    int sum = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        sum += lastDigit * lastDigit * lastDigit;
        num /= 10;
    }

    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int n;

    cout << "Enter Number : " << endl;
    cin >> n;

    bool isArm = isArmstrong(n);

    if (isArm)
    {
        cout << "Number is Armstrong ." << endl;
    }
    else
    {
        cout << "Number is Not Armstrong ." << endl;
    }
}