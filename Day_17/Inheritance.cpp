#include <iostream>
using namespace std;

// class ParentClass
// {
// private:
//     string password;
//     int id;

// public:
//     string userName;
//     string bio;

//     ParentClass(){
//     }
//     ParentClass(string userName, string bio)
//     {
//         cout << "parent class  called." << endl;
//         this->userName = userName;
//         this->bio = bio;
//     }
//     // Getters

//     string getPassword()
//     {
//         return this->password;
//     }

//     int getId()
//     {
//         return this->id;
//     }

//     // Setters

//     void setPassword(string password)
//     {
//         this->password = password;
//     }
//     void setId(int id)
//     {
//         this->id = id;
//     }
// };

// class ChildClass : public ParentClass
// {
// public:
//     string user;

//     ChildClass(string userName,string bio){
//         this->userName=userName;
//         this->bio=bio;
//     }
// };

// class Animal
// {
// public:
//     string color;
//     void eat()
//     {
//         cout << "eat \n";
//     }
//     void breath()
//     {
//         cout << "breathes" << endl;
//     }
// };
// //* Single inheritance
// class Fish : public Animal
// {
// public:
//     int fins;
//     void swim()
//     {
//         eat();
//         breath();
//         cout << color << endl;
//         cout << "Swim...." << endl;
//     }
// };

// //* multi level  inheritance
// class Shark : public Fish
// {
// public:
//     string teeth = "Sharp Teeth";

//     void beat()
//     {
//         cout << " Beat any animal..\n";
//     }
// };

//* multiple  inheritance
class Teacher
{
    public:
        int salary;
        string subject;

        void Teaching(){
        cout << "Teacher Teaching....." << endl;
        }
};

class Student {

public:
    int rollNo;
    float cgpa;

    void info(){
        cout << "Student cgpa is : 8.9" << endl;
    }
};

class TA : public Teacher,public Student {

public:
    void study(){
        cout << "Study in phd.." << endl;
    }
};

int main()
{

    TA ta1;

    ta1.cgpa=9;
    ta1.info();
    ta1.study();
    ta1.salary=3878784;
    // Fish f1;

    // f1.breath();
    // f1.color="black";
    // f1.eat();
    // f1.swim();

    // Shark s1;

    // s1.swim();
    // s1.beat();
    // s1.eat();
    // s1.breath();
    // ChildClass c1("Charvi","hi");
    // cout << c1.userName << endl;
    // c1.setPassword("chetan143");
    // cout << c1.getPassword() << endl;
    // cout << sizeof(ParentClass) << endl;
    // cout << sizeof(ChildClass) << endl;
    return 0;
}