//3637. trionic array 1
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isDecreasing(vector<int>& ans, int a, int b) {
        if (a == 0 || b == ans.size() - 1) return false;
        for (int i = a; i < b; i++) {
            if (ans[i] <= ans[i + 1]) return false;
        }
        return true;
    }

    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int peak = n - 1;
        int valley = 0;

        for (int i = 0; i < n - 1; i++) {
            if (peak == n - 1 && nums[i] >= nums[i + 1]) {
                peak = i;
            }
            if (valley == 0 && nums[n - 1 - i] <= nums[n - 2 - i]) {
                valley = n - 1 - i;
            }
            if (peak < valley) {
                return isDecreasing(nums, peak, valley);
            }
        }
        return false;
    }
};