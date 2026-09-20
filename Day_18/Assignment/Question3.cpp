#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{

public:
    string studentId;

    Student(string name, int age, string studentId)
    {
        this->name = name;
        this->age = age;
        this->studentId = studentId;
    }

    void showStudentDetails()
    {
        cout << "Student Name is : " << this->name << endl;
        cout << "Student age is : " << this->age << endl;
        cout << "Student id is : " << this->studentId << endl;
    }
};
int main()
{
    Student s("chetan", 23, "s123334");
    s.showStudentDetails();
    return 0;
}