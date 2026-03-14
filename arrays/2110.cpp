#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long count = 0;
        int ws = 0;
        int we = 0;

        while (we < prices.size()) {
            if (we != 0 && prices[we] != prices[we - 1] - 1) {
                ws = we;
            }

            count += we - ws + 1;
            we++;
        }

        return count;
    }
};

int main() {
    int n;
    cin >> n;               // size of array

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];   // input elements
    }

    Solution obj;
    cout << obj.getDescentPeriods(prices) << endl;

    return 0;
}