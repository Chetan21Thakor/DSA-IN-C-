#include <iostream>
using namespace std;

class User
{
private:
    int id;
    string password;

public:
    string userName;
    int follower;
    int following;
    string bio;

    User(string userName, int follower, int following, string bio)
    {
        this->userName = userName;
        this->follower = follower;
        this->following = following;
        this->bio = bio;
    }
    void info()
    {
        cout << "User ID is : " << this->id << endl;
        cout << "User Name is : " << this->userName << endl;
        cout << "User password is : " << this->password << endl;
        cout << "User follower is : " << this->follower << endl;
        cout << "User following is : " << this->following << endl;
        cout << "User bio is : " << this->bio << endl;
    }
    // Getters

    int getId()
    {
        return this->id;
    }

    string getPassword()
    {
        return this->password;
    }

    // Setters

    void setId(int id)
    {
        this->id=id;
    }

    void setPassword(string password)
    {
        this->password=password;
    }
};

int main()
{
    User chetan("@Chetan21Thakor",211,20,"Stay Happy.");
    chetan.setPassword("Charvi@122");
    chetan.setId(2002);

    cout << chetan.getId() << endl;
    cout << chetan.userName << endl;
    cout << chetan.getPassword() << endl;
    cout << chetan.bio << endl;
    cout << chetan.follower<< endl;
    cout << chetan.following << endl;

    chetan.info();
    return 0;
}