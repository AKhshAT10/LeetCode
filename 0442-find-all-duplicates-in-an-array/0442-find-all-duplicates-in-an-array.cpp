class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int> vec;
        for(int num : nums){
            mpp[num]++;
        }
        for(pair<int,int> num : mpp){
            if(num.second==2){
                vec.push_back(num.first);
            }
        }
        return vec;
    }
};