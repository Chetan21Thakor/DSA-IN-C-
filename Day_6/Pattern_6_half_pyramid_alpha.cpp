#include <iostream>
using namespace std;

void Pattern_6_half_pyramid_alpha(int n)
{

    char ch = 'A';

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}

int main()
{
    Pattern_6_half_pyramid_alpha(6);
}