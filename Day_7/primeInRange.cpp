#include <iostream>
using namespace std;

void prime_in_range(int start, int end)
{

    bool is_prime;

    cout << "Prime Numbers:";

    if (start <= 2 && start >=0)
    {
        cout <<"2 ";
        
        for (int i = start; i <= end; i++)
        {
            is_prime = true;

            for (int j = 2; j * j <= end; j++)
            {

                if (i % j == 0)
                {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime)
            {
                cout << i << " ";
            }
        }
    }
    else
    {
        for (int i = start; i <= end; i++)
        {
            is_prime = true;

            for (int j = 2; j * j <= end; j++)
            {

                if (i % j == 0)
                {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime)
            {
                cout << i << " ";
            }
        } 
    }
}

int main()
{
    prime_in_range(2,20);
}