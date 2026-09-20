#include <iostream>
using namespace std;

  class Shape
{
    public:
        virtual void draw() = 0;
};
class Circle : public Shape {

    public:
        void draw(){
            cout << "Circle Draw...." << endl;
        }
};
class Square : public Shape {

    public:
        void draw(){
            cout << "Square Draw...." << endl;
        }
};

int main()
{
    Square s;
    s.draw();
    Circle c;
    c.draw();
    return 0;
}