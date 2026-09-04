#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> triplets(vector<int> arr)
{

    vector<int> triplets;

    for (int i = 0; i < arr.size(); i++)
    {
        int j = i + 1, k = j + 1;

        if (arr[i] + arr[j] + arr[k] == 0)
        {
            triplets.push_back(i);
            triplets.push_back(j);
            triplets.push_back(k);
        }
    }

    return triplets;
}

vector<int> triplets1(vector<int> arr)
{

    vector<int> triplets;

    for (int i = 0; i < arr.size() - 2; i++)
    {
        for (int j = i + 1; i < arr.size() - 1; j++)
        {

            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                }
            }
        }
    }

    return triplets;
}

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;

    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }

        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;

                while (j < k && nums[j] == nums[j - 1])
                {
                    j++;
                }

                while (j < k && nums[k] == nums[k + 1])
                {
                    k--;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = threeSum(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << "  ";
        }
        cout << endl;
    }
}
