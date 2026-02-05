//2395 find subarray with equal sum
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> s;
        for(int no = 0; no < nums.size() - 1; no++){
            int sum = nums[no] + nums[no + 1];
            if(s.count(sum)) return true;
            s.insert(sum);
        }
        return false;
    }
};