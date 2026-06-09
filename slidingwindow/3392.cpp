class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int cnt = 0;
        int wstart = 0;
        int wend = 0;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            if(wend-wstart+1 == 3){
                sum = nums[wstart]+nums[wend];
                if(nums[wend-1]==2*sum){
                    cnt++;
                }
                wstart++;
            }
            wend++;
        }
        return cnt;
    }
};