class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int sum = 0;
        int maxi = 0;
        vector<int> mpp(101,0);
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            maxi = max(maxi,mpp[nums[i]]);
        }
        sum = maxi * count(mpp.begin(),mpp.end(),maxi);
        return sum;
    }
};