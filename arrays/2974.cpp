class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        int i = 0;
        int j = 1;
        sort(nums.begin(),nums.end());
        while(i<nums.size() && j<nums.size()){
            arr.push_back(nums[j]);
            arr.push_back(nums[i]);
            i+=2;
            j+=2;
        }
        return arr;
    }
};