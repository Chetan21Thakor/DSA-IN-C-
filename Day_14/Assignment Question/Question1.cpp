// TODO Assignment all question remain to complete.

#include <iostream>
using namespace std;

int lowerCaseVowelsInString(string s)
{

    int vowelsCount = 0;

    for (char ch : s)
    {

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowelsCount++;
        }
       
    }
     return vowelsCount;
}

int upperCaseVowelsInString(string s)
{

    int vowelsCount = 0;

    for (char ch : s)
    {

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowelsCount++;
        }
       
    }
     return vowelsCount;
}

int upper_LowerCaseVowelsInString(string s)
{

    int vowelsCount = 0;

    for (char ch : s)
    {

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowelsCount++;
        }
        
    }
    return vowelsCount;
}

int main()
{
    string sentence="Hi HOw are  you?";
    cout<<lowerCaseVowelsInString(sentence)<<endl;
    cout<<upper_LowerCaseVowelsInString(sentence)<<endl;
    cout<<upperCaseVowelsInString(sentence)<<endl;

}