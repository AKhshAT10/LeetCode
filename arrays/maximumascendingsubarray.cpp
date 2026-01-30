//1800 maximum ascending subarray sum
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int currentSum = nums[0];   
        int maxSum = currentSum;    

        for (int i = 1; i < nums.size(); i++) {
            
            if (nums[i - 1] < nums[i]) {
                currentSum += nums[i];
            } 
            else {
                currentSum = nums[i];
            }
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};