class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minnum = INT_MAX;
        int maxnum = INT_MIN;
        for(int i=0;i<nums.size();i++){
            minnum = min(minnum,nums[i]);
            maxnum = max(maxnum,nums[i]);
        }
        int maxdiv = 1;
        for(int i=1;i<=minnum;i++){
            if(minnum%i==0 && maxnum%i==0){
                maxdiv = i;
            }
        }
        return maxdiv;
    }
};