#include <iostream>
using namespace std;

void Pattern_5_half_pyramid_num(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    Pattern_5_half_pyramid_num(6);
}