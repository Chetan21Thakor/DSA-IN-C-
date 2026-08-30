#include <iostream>
using namespace std;

void Pattern_2_Star(int n)
{

    for (int i = 1; i <= n; i++)
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
    Pattern_2_Star(6);
}