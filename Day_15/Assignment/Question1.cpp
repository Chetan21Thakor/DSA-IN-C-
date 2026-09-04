#include <iostream>
#include <vector>
using namespace std;

vector<int> duplicateInArr(vector<int> arr)
{

    vector<int> duplicateNum;

    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] == arr[i + 1])
        {
            duplicateNum.push_back(arr[i]);
            duplicateNum.push_back(arr[i] + 1);
        }
    }

    return duplicateNum;
}

vector<int> findErrorNums(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    vector<bool> isPresent(n + 1, false);

    for (int i = 0; i < n; i++)
    {
        if (isPresent[nums[i]])
        {
            ans.push_back(nums[i]);
        }

        isPresent[nums[i]] = true;
    }

    for (int i = 1; i < isPresent.size(); i++)
    {
        if (!isPresent[i])
        {
            ans.push_back(i);
            break;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 2, 4, 4, 6, 6, 8, 8, 10};

    // vector<int> duplicateMissingNum = findErrorNums(arr);

    // for (int i = 0; i < duplicateMissingNum.size(); i++)
    // {
    //     cout << duplicateMissingNum[i] << " ";
    // }

    vector<int> duplicate=duplicateInArr(arr);

    for (int i = 0; i < duplicate.size(); i++)
    {
        cout << duplicate[i] << " ";
    }

}
