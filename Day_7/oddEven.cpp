#include <iostream>
using namespace std;

int oddEven(int a)
{
    if (a % 2 == 0)
    {
        cout << "Number is Even \n";
    }
    else
    {
        cout << "Number is odd \n";
    }
    return 0;
}

int main()
{
    cout<<oddEven(4) << endl; // ans :Even
    return 0;
}