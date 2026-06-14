class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digitsum = 0;
        int elementsum = 0;
        int diff = 0;
        for(int i=0;i<nums.size();i++){
            elementsum += nums[i];
            while(nums[i]>=10){
                digitsum += nums[i]%10;
                nums[i]/=10;
            }
            digitsum += nums[i];
        }
        
        diff = abs(elementsum - digitsum);
        return diff;
    }
};