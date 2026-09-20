#include <iostream>
using namespace std;

// class Teacher
// {
//     int id;

// public:
//     string name;
//     int age;
//     string subject;
//     float salary;
    
//     Teacher() {};

//     Teacher(string name, int id, int age, string subject, float salary)
//     {
//         this->name = name;
//         this->id = id;
//         this->age = age;
//         this->subject = subject;
//         this->salary = salary;
//     }

//     void showInfo()
//     {
//         cout << "Name of the Teacher is : " << this->name << endl;
//         cout << "Id of the Teacher is : " << this->id << endl;
//         cout << "Age of the Teacher is : " << this->age << endl;
//         cout << "Subject of the Teacher is : " << this->subject << endl;
//         cout << "Salary of the Teacher is : " << this->salary << endl;
//     }
// };

// class Student
// {
//     int id;

// public:
//     string name;
//     int age;
//     int rollNo;
//     float Percentage;
//     Student() {};
//     Student(string name, int id, int age, int rollNO, float Percentage)
//     {
//         this->name = name;
//         this->id = id;
//         this->age = age;
//         this->rollNo = rollNO;
//         this->Percentage = Percentage;
//     }

//     void showInfo()
//     {
//         cout << "Name of the Student is : " << this->name << endl;
//         cout << "Id of the Student is : " << this->id << endl;
//         cout << "Age of the Student is : " << this->age << endl;
//         cout << "Roll No of the Student is : " << this->rollNo << endl;
//         cout << "Percentage of the Student is : " << this->Percentage << endl;
//     }
// };

// class TA : public Student, public Teacher
// {
//     int id;

// public:
//     TA(string name, int id, int age, int rollNO, float Percentage, string subject, float salary)
//     {
//         Student::name = name;
//         this->id = id;
//         Student::age = age;
//         this->rollNo = rollNO;
//         this->Percentage = Percentage;
//         this->subject = subject;
//         this->salary = salary;
//     }
//     void showInfo()
//     {
//         cout << "Name of the Student is : " << Student::name << endl;
//         cout << "Id of the Student is : " << this->id << endl;
//         cout << "Age of the Student is : " << Student::age << endl;
//         cout << "Roll No of the Student is : " << Student::rollNo << endl;
//         cout << "Percentage of the Student is : " << Student::Percentage << endl;
//         cout << "Subject of the Teacher is : " << Teacher::subject << endl;
//         cout << "Salary of the Teacher is : " << Teacher::salary << endl;
//     }
// };

class A {

    public:
       A(){
        cout << "Hi From Constructor A" << endl;
       } 
       ~A(){
        cout << "Hi From Destructor A" << endl;
       }
};

class B {

    public:
       B(){
        cout << "Hi From Constructor B" << endl;
       } 
       ~B(){
        cout << "Hi From Destructor B" << endl;
       }
};

class C: public B ,public A{

    public:
       C(){
        cout << "Hi From Constructor C" << endl;
       } 
       ~C(){
        cout << "Hi From Destructor C" << endl;
       }
};

class D: public C{

    public:
       D(){
        cout << "Hi From Constructor D" << endl;
       } 
       ~D(){
        cout << "Hi From Destructor D" << endl;
       }
};
int main()
{
    // TA ta1("Chetan",121,24,1,83.33,"c++",14000);
    // ta1.showInfo();

    // C c;
    D d;
    return 0;
}