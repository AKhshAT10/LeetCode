//1752 check if array is sorted and rotated
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for (int i = 1; i < 2 * n; i++) {
            if (nums[(i - 1) % n] <= nums[i % n]) {
                cnt++;
            } else {
                cnt = 1; 
            }
            if (cnt == n) return true;
        }

        return false;
    }
};