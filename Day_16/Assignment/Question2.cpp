// ! Question 2 : Given a non-empty array of integers nums, every element appears twice  except for one. Find that single one

#include <iostream>
#include <vector>
using namespace std;

int uniqueNumInArray(vector<int> &num)
{
    int uniqueNum = 0;
    for (int i = 0; i < num.size(); i++)
    {
        uniqueNum ^= num[i];
    }
    return uniqueNum;
}

int main()
{
    vector<int> v = {2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7};
    cout << uniqueNumInArray(v);
}