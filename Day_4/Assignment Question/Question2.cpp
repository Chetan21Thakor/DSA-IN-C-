#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    if ((year % 4 == 0))
    {
        return 4;
    }
    else if (((year % 100 == 0) && (year % 400 == 0)))
    {
        return true;
    }
    return false;
}

int main()
{
    int year;

    cout << "Enter the Year : " << endl;
    cin >> year;

    bool isLeap = isLeapYear(year);

    if (isLeap)
    {
        cout << "Year is Leap Year";
    }
    else
    {
        cout << "Year is Not Leap Year";
    }
}