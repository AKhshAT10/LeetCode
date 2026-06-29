class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>vec;
        for(int num : nums){
            mpp[num]++;
        }
        for(pair<int,int> num : mpp){
            if(num.second==1 && mpp.count(num.first+1)==0 && mpp.count(num.first-1)==0){
                    vec.push_back(num.first);
            }
        }
        return vec;
    }
};