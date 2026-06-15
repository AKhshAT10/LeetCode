class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> mpp(nums.begin(),nums.end());
        while(mpp.find(original)!=mpp.end()){
            original *= 2;
        }   
        return original;
    }
};