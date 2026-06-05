class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> arr(101,0);
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        int pair = 0;
        int leftOver = 0;
        for(int i=0;i<arr.size();i++){
            pair += arr[i]/2;
            leftOver += arr[i]%2;
        }
        return {pair,leftOver};
    }
};