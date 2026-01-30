//largest element in an array (striver platform)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - 1];
    }
};