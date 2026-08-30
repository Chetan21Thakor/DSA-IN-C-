#include <iostream>
using namespace std;

void Pattern_4_Star(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    Pattern_4_Star(6);
}