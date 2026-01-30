//1929 concatenation of array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            result.push_back(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++) {
            result.push_back(nums[i]);
        }

        return result;
    }
};
