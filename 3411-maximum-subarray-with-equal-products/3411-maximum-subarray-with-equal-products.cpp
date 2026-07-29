class Solution {
public:
    int maxLength(vector<int>& nums) {
    int ans = 0, n = nums.size();
    for (int i = 0; i < n; ++i) {
        long long gcdV = nums[i], lcmV = nums[i];
        long long prod = 1;                     
        for (int j = i; j < n; ++j) {
            prod *= nums[j];
            if (prod > INT_MAX) break;           
            gcdV = gcd(gcdV, (long long)nums[j]);
            lcmV = lcm(lcmV, (long long)nums[j]);
            if (prod == gcdV * lcmV)
                ans = max(ans, j - i + 1);
        }
    }
    return ans;
    }
};