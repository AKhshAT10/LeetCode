class Solution {
public:
    int reverse(int i){
        int ans = 0;
        while(i>0){
            ans = ans*10 + i%10;
            i/=10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> set(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            set.insert(reverse(nums[i]));
        }
        return set.size();
    }
};