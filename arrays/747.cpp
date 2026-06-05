class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = INT_MIN;
        int maxiIndex = 0;
        for(int i=0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
            if(nums[i]==maxi){
                maxiIndex = i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=maxi && 2*nums[i]>maxi){
                return -1;
            }
        }
      return maxiIndex;
    }
};