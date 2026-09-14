#include <iostream>
#include <string.h>
using namespace std;

class Student
{
public:
    string name = "chetan";
    float cgpa = 8.3;
 
    void getPercentage()
    {
        cout << (cgpa * 10) << endl;
    }
};

class User
{
    string id;
    string password;

public:
    string username;
    int follower;
    int following;
    string bio;

    User()
    {
        cout << "Called automatically when object created without a parameter.";
    }

    User(string username, int follower, int following, string bio)
    {
        this->username = username;
        this->follower = follower;
        this->following = following;
        this->bio = bio;
    }

    // Getters
    string   getUserName()
    {
        return this->username;
    }
    string getPassword()
    {
        return this->password;
    }
    string getBio()
    {
        return this->bio;
    }
    int getFollower()
    {
        return this->follower;
    }
    int getFollowing()
    {
        return this->following;
    }
    string getId()
    {
        return this->id;
    }

    // Setters
    void setUserName(string username)
    {
        this->username = username;
    }

    void setPassword(string password)
    {
        this->password = password;
    }

    void setBio(string bio)
    {
        this->bio = bio;
    }

    void setFollower(int follower)
    {
        this->follower = follower;
    }

    void setFollowing(int following)
    {
        this->following = following;
    }
    void setId(string id)
    {
        this->id = id;
    }

    void getInfo()
    {
        cout << "User Name is : " << this->username << endl;
        cout << "User Follower: " << this->follower << endl;
        cout << "User Following : " << this->following << endl;
        cout << "User Bio is : " << this->bio << endl;
        cout << "User Password is : " << this->password << endl;
        cout << "User ID is : " << this->id << endl;
    }
};

class Car
{
    string name;
    string color;

public:
    Car(string nameVal, string colorVal)
    {
        name = nameVal;
        color = colorVal;
        cout << endl;
        cout << "Constructor is called automatically when the object created .\n"
             << endl;
        cout << "Constructor has same name as class name.\n"
             << endl;
        cout << "Constructor has not it's return type just because of it's return object of the class not any primitive data.\n"
             << endl;
        cout << "If developer not create a custom constructor then compiler create a it's default constructor.\n"
             << endl;
        cout << "it's called once at creation of the object.\n"
             << endl;
        cout << "It's always written inside Public Property just because it's always called from the outside of the class.\n"
             << endl;
        cout << "Memory Allocation to object is done when the constructor is called or constructor is create a object." << endl;
        cout << endl;
    }

    // Getters
    string getName()
    {
        return name;
    }

    string getColor()
    {
        return color;
    }
};

main()
{

    User u1("@Chetan21Thakor", 211, 50, "Stay happy");
    u1.setPassword("Charvi$22");
    u1.setId("userIdNo:19394");
    u1.getInfo();

    // Car c1("BMW","Black");
    // cout << "Car Name is : "<<c1.getName() << endl;
    // cout << "Car Color is : "<<c1.getColor() << endl;
    // User u1;
    // u1.username = "@Chetan21";
    // u1.follower = 211;
    // u1.following = 20;
    // u1.bio = "Hi how are you?";

    // u1.getInfo();

    // Student s1;

    // cout << s1.name << endl;
    // cout << s1.cgpa << endl;
    // s1.getPercentage();

    // cout << "size is : " << sizeof(u1) << endl;
    // cout << "size is : " << sizeof(s1) << endl;
    // cout << "size is : "<<sizeof(Car) << endl;
    // cout << "size is : "<<sizeof(c1) << endl;
    // cout << sizeof(s1) << endl;

    return 0;
}