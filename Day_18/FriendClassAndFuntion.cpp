#include <iostream>
using namespace std;

class A
{
    string secret = "secret Data";
    friend class B;
    friend void revelSecret(A &a);
};

class B
{
    public:

    void showSecret(A &a)
    {
        cout << "Secret of class is Privet data we can access " << a.secret << endl;
    }
    void revelSecret(A &a)
        {
            cout << "Secret of class is Privet data we can access " << a.secret << endl;
        }
};

int main()
{
    A a;
    B b1;
    b1.showSecret(a);
    b1.revelSecret(a);
    return 0;
}