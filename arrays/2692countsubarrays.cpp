#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long maxi = *max_element(nums.begin(), nums.end());
        long long maxOccur = 0;
        long long res = 0;
        long long wstart = 0;

        for (int wend = 0; wend < nums.size(); wend++) {
            if (nums[wend] == maxi) {
                maxOccur++;
            }

            while (maxOccur >= k) {
                if (nums[wstart] == maxi) {
                    maxOccur--;
                }
                wstart++;
            }

            res += wstart;
        }

        return res;
    }
};

int main() {
    Solution sol;

    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k: ";
    cin >> k;

    long long result = sol.countSubarrays(nums, k);
    cout << "Result: " << result << endl;

    return 0;
}