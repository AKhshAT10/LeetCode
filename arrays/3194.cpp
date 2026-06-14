class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j = nums.size()-1;
        double minavg = 1e18;
        for(int i=0;i<nums.size()/2;i++){
            double avg = (nums[i]+nums[j])/2.0;
            minavg = min(minavg,avg);
            j--;
        }
        return minavg;
    }
};