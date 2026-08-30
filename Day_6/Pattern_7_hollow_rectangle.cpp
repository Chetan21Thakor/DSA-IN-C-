#include <iostream>
using namespace std;

void Pattern_7_hollow_rectangle(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n + 1; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    Pattern_7_hollow_rectangle(6);
}