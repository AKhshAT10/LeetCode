class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        sort(nums.begin(),nums.end());
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            mini = min(mini,nums[i]);
            maxi = max(maxi,nums[i]);
        }
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>mini && nums[i]<maxi){
                cnt++;
            }
        }
        return cnt;
    }
};