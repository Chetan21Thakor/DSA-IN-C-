#include<iostream>
#include<string>
using namespace std;


int main(){

    //* Creation of the C++ string.
    std::string name="chetan";

    //* How much memory space take in memory
    cout<<sizeof(string)<<" = "<<sizeof(name)<<endl;//* 32 byte.

    // * printing string
    cout<<name<<endl;

    //*input a c++ string
    cin>>name;//* first way
    getline(cin,name,'.'); //*second way

    //* useful member function of the c++ string
    name.append(" Thakor");
    cout<<"Append at end of the string"<<name<<endl;

    int n=name.length();
    cout<<"Length of the string is:"<<n<<endl;

    string substr1=name.substr(0,6);
    cout<<"sub str is :"<<substr1<<endl;

    int idx=name.find("chetan",8);
    cout<<"Index of word is : "<<idx<<endl;

    name.assign("hi");
    cout<<"Assign a new string : "<<name<<endl;

    name.push_back('.');
    cout<<"pushing one character at end : "<<name<<endl;

    char ch=name.at(2);
    cout<<"Character present at index : "<<ch<<endl;

   bool is= name.starts_with('h');
   cout<<"start with specific string"<<is<<endl;

   //* C++ string is dynamic in size
   cout<<name<<endl;

   cout<<"length of string change run time."<<name.length()<<endl;
   name.assign("Chetan Thakor");
   cout<<"length of string change run time."<<name.length()<<endl;

   //* C++ String Operation + ,==,>,< ect .

   string str=name + '.';
   cout<<name<<endl;
   cout<<"string concatenating : "<<str<<endl;

   bool is1=name > "a";
   cout<<name<<endl;
   cout<<is1<<endl;

   bool is2=name < "a";
   cout<<name<<endl;
   cout<<is2<<endl;

   bool is3=name == "Chetan Thakor";
   cout<<name<<endl;
   cout<<is3<<endl;

   bool is4=name != "Chetan Thakor";
   cout<<name<<endl;
   cout<<is4<<endl;

    bool is5=name > "c";
   cout<<name<<endl;
   cout<<is5<<endl;

   bool is6=name < "Chetan Thakor .";
   cout<<name<<endl;
   cout<<is6<<endl;

   //* for each loop on c++ string to access a each character of the c++ string.

   for(char ch : name){
    cout<<ch<<" ";
   }
}
