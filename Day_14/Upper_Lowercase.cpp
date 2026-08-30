#include <iostream>
#include <cstring>
using namespace std;



void toUpperCase(char str[], int n)
{

    for (int i = 0; i < n; i++)
    {

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (str[i] - 'a') + 'A';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            continue;
        }
        else
        {
            continue;
        }
    }
}

void toLowerCase(char str[], int n)
{

    for (int i = 0; i < n; i++)
    {

        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (str[i] - 'A') + 'a';
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            continue;
        }
        else
        {
            continue;
        }
    }
}

void printCstring(char str[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << str[i] << " ";
    }
    cout<<endl;
}

int main()
{

    char str[] = "hi how are you ?";
    int n = sizeof(str) / sizeof(char);

    toUpperCase(str,n);
    printCstring(str, n);
    toLowerCase(str,n);
    printCstring(str, n);
}