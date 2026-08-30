
#include <iostream>
using namespace std;

char nextChar(char ch)
{
    if (ch == 'z')
    {
        return 'a';
    }
    else if (ch == 'Z')
    {
        return 'A';
    }
    else
    {
        return ch + 1;
    }
}

int main()
{
    char ch;

    cout << "Enter ch : " << endl;
    cin >> ch;

    cout<<"Next Character of "<<ch << " is : "<<nextChar(ch);
}