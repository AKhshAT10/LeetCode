class Solution {
public:
    vector<int> replaceElements(vector<int>& nums){
        int currval = -1;
        int maxval = -1;
        for(int i=nums.size()-1;i>=0;i--){
            currval = nums[i];
            nums[i] = maxval;
            maxval = max(maxval,currval);
        }
        return nums;
    }
};