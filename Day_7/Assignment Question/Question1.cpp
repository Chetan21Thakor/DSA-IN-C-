// TODO all the assignment Question remain to complete.
#include <iostream>
using namespace std;

bool palindromeNumber(int n)
{
    int num = n;
    int reversNum = 0;
    int pow = 1;

    while (num > 0)
    {
        int lastDigit = num % 10;
        reversNum += lastDigit * pow;
        pow *= 10;
        num /= 10;
    }
    cout<<reversNum;
}

int main()
{

    int n;

    cout << "Enter a  Number : " << endl;
    cin >> n;

    bool isPalindrome = palindromeNumber(n);
    cout<<isPalindrome<<endl;
    if (isPalindrome)
    {
        cout << "number is Palindrome.";
    }
    else
    {
        cout << "number is not Palindrome.";
    }
}