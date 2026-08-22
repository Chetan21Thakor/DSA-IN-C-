#include <iostream>
using namespace std;

void charSortsDescending(char ch[], int n)
{

    for (int i = 1; i < n; i++)
    {

        char curr = ch[i];
        int prev = i - 1;

        while (prev >= 0 && ch[prev] < curr)
        {
            swap(ch[prev], ch[prev + 1]);
            prev--;
        }
    }
}

void charSortAscending(char ch[], int n)
{

    for (int i = 1; i < n; i++)
    {

        char curr = ch[i];
        int prev = i - 1;

        while (prev >= 0 && ch[prev] > curr)
        {
            swap(ch[prev], ch[prev + 1]);
            prev--;
        }
    }
}


void printArray(char ch[],int n){

    for(int i=0;i<n;i++){

        cout<<ch[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    char ch[] = {'f','b','a','e','c','d',};
    int n = sizeof(ch) / sizeof(char);
    
    charSortsDescending(ch,n);
    printArray(ch,n);

    charSortAscending(ch,n);
    printArray(ch,n);
}