#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> pairSum(vector<int> vec, int target)
{
   vector<pair<int, int>> arr;

    for (int i = 0; i < vec.size(); i++)
    {
        arr.push_back({vec[i], i});
    }

    sort(arr.begin(), arr.end());

    int st = 0;
    int end = arr.size() - 1;

    while (st < end)
    {
        int sum = arr[st].first + arr[end].first;

        if (sum == target)
        {
            return {arr[st].second, arr[end].second};
        }
        else if (sum > target)
        {
            end--;
        }
        else
        {
            st++;
        }
    }

    return {};
}

int main()
{
    vector<int> vec = {3, 2, 4};
    int targetSum = 6;

    vector<int> vec1 = pairSum(vec, targetSum);

    if (vec1.size() == 2)
    {
        cout << "Pair is: [" << vec1[0] << ", " << vec1[1] << "]" << endl;
    }
    else
    {
        cout << "No pair found!" << endl;
    }

    return 0;
}