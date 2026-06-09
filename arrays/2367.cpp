class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,int> mpp;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mpp[nums[i]+diff] && mpp[nums[i]+2*diff]){
                cnt++;
            }
        }
        return cnt;
    }
};