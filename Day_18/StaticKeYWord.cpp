#include <iostream>
using namespace std;

void print(int *n)
{

    static int count = 0;
    cout << "Count is : " << count++ << (*n)++ << endl;
}

class Counter
{

public:
    static int x;
};

int Counter::x = 10;

int main()
{
    static int num = 0;
    print(&num);
    print(&num);
    print(&num);
    print(&num);
    print(&num);

    Counter c1;
    Counter c2;
    Counter c3;
    Counter c4;
    Counter c5;
    cout << "Counter value is :" << c1.x++ << endl;
    cout << "Counter value is :" << c2.x++ << endl;
    cout << "Counter value is :" << c3.x++ << endl;
    cout << "Counter value is :" << c4.x++ << endl;
    cout << "Counter value is :" << c5.x++ << endl;
    cout << "Counter value is :" << c5.x << endl;
    return 0;
}