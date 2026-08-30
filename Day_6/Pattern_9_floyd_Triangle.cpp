#include <iostream>
using namespace std;

void Pattern_9_floyd_Triangle(int n)
{

    int count = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }
}

int main()
{
    Pattern_9_floyd_Triangle(6);
}