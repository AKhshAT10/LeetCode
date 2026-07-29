class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         vector<int> vec;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mpp;
        for(int num : nums){
            mpp[num]++;
        }
        
        vector<pair<int,int>>      freq(mpp.begin(), mpp.end());
        
        sort(freq.begin(), freq.end(),
             [](pair<int,int>& a, pair<int,int>& b){
                 return a.second > b.second;
             });
            
        for(pair<int,int> it : freq){
            vec.push_back(it.first);
            k--;
            if(k==0) break;
        }
        return vec;
    }
};