class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
    int maxi = *max_element(nums.begin(), nums.end());

    if(maxi != n - 1) return false; 

    unordered_map<int,int> mpp;
    for(int num : nums) mpp[num]++;

    if(mpp[maxi] != 2) return false; 
    for(int i = 1; i < maxi; i++){
        if(mpp[i] != 1) return false; 
    }
    return true;
    }
};