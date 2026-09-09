#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int buyAndSellStock(vector<int> prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        minPrice = min(minPrice, price);
        maxProfit = max(maxProfit, price - minPrice);
    }

    return maxProfit;
}

int main() {
    vector<vector<int>> tests = {
        {},
        {7, 1, 5, 3, 6, 4},
        {7, 6, 4, 3, 1},
        {1, 2, 3, 4, 5},
        {3, 2, 6, 5, 0, 3},
        {2, 1, 2, 0, 1},
        {1},
        {5, 5, 5, 5},
        {1, 3, 2, 8, 10, 17},
        {-2, -1, -3, -4, -5}
    };

    vector<int> expected = {0, 5, 0, 4, 7, 1, 0, 0, 16, 0};

    for (int i = 0; i < tests.size(); i++) {
        int actual = buyAndSellStock(tests[i]);
        cout << "Test " << i + 1 << ": prices = [";
        for (size_t j = 0; j < tests[i].size(); j++) {
            cout << tests[i][j] << (j + 1 < tests[i].size() ? ", " : "");
        }
        cout << "] => actual = " << actual << ", expected = " << expected[i] << " => " << (actual == expected[i] ? "PASS" : "FAIL") << endl;
    }

    return 0;
}
