class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = nums.size()-1;
        int current = 0;
        int maxi = 0;
        while(left<right){
            current = nums[left]+nums[right];
            maxi = max(maxi,current);
            left++;
            right--;
        }
        return maxi;
    }
};