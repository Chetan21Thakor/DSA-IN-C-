#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target)
{

    int st = 0, end = vec.size() - 1, currSum = 0;
    vector<int> pair;

    while (st < end)
    {
        currSum=vec[st] +vec[end];

        if (currSum == target)
        {
            vector<int> pair = {st, end};
            return pair;
        }
        else if (currSum > target)
        {
            end--;
        }
        else
        {
            st++;
        }
    }
    return pair;
}

int main()
{
    vector<int> vec = {2, 7, 11, 15};

    int targetSum = 13;


    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = i + 1; j < 4; j++)
    //     {
    //         for (int k = i; k < j; k++)
    //         {
    //             int currSum = vec[k] + vec[j];

    //             if (currSum == sum)
    //             {
    //                 cout << "Pair is :" << "(" << i << "," << j << ")" << endl;
    //                 break;
    //             }
    //         }
    //     }
    // }

     vector<int> vec1= pairSum(vec,targetSum);

     cout<<"Pair is : "<<vec1[0]<<","<<vec1[1]<<endl;
}