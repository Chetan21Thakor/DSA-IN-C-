#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;

    bool isMerrid;
    cout<<"If you are Merrid  if you are not merrid then enter 0.";
    cin>>isMerrid;

    int numberOfchild;
    
    if (age >= 18){

        cout << "You can vote." << endl;

        if(isMerrid){
            cout<<"Enter your  number Of child you have:";
            cin>>numberOfchild;

            if (age >=25 && numberOfchild >= 2){
                cout<<"You are eligible for a Gram Panchayat Election .";
            }else{
                cout<<"You are not eligible for a Gram Panchayat Election 2.";
            }
        }else{
                cout<<"You are not eligible for a Gram Panchayat Election 3.";
            }
    }else{
        cout << "You cannot vote." << endl;
    }

    return 0;
}