#include <iostream>
using namespace std;

void Pattern_3_1_Star(int n)
{

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    Pattern_3_1_Star(6);
}