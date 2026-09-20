#include <iostream>
using namespace std;

class Encapsulation
{
private:
    string password;

public:
    //Getter
    string getPassword(){
        return this->password;
    }
    //setter

    void setPassword(string password){
        this->password=password;
    }
};


int main()
{
    
    return 0;
}