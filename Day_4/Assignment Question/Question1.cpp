// TODO All assignment Question to complete

#include <iostream>
using namespace std;

void numberCheck(int n)
{

    if (n > 0)
    {
        cout << "number is Positive.";
    }
    else if (n < 0)
    {
        cout << "number is Negative.";
    }
    else
    {
        cout << "number is Zero.";
    }
}

int main()
{
    int n;

    cout << "Enter the Number : " << endl;
    cin >> n;

    numberCheck(n);
}