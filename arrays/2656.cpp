class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxi = nums[nums.size()-1];
        int sum = 0;
        while(k>0){
            sum += maxi;
            maxi++;
            k--;
        }
        return sum;
    }
};