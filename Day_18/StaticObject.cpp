#include <iostream>
using namespace std;

class StaticObject
{

public:
    StaticObject()
    {
        cout << "Constructor" << endl;
    }

    ~StaticObject()
    {
        cout << "Destructor" << endl;
    }
};

int main()
{
    int a=1;

    if(a){
      static  StaticObject s1;
    }
    cout << "Code Ending...." << endl;
    return 0;
}